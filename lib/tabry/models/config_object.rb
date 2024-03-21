# frozen_string_literal: true

require_relative "config_error"

module Tabry
  module Models
    class ConfigObject
      def to_s
        inspect
      end

      def inspect
        field_strings = self.class::FIELDS.keys.map do |f|
          val = instance_variable_get(:"@#{f}")
          if val.nil?
            nil
          else
            "#{f}=#{val.inspect}"
          end
        end
        desc = [self.class.name, *field_strings.compact].join(" ")
        "#<#{desc}>"
      end

      attr_reader :_root, :_raw

      def initialize(raw:, root:)
        @_raw = raw
        @_root = root or raise "missing root"
        unknown_fields = @_raw.keys - self.class::FIELDS.keys.map(&:to_s)
        unless unknown_fields.empty?
          raise ConfigError, "Unknown field(s) #{unknown_fields.inspect} for #{self.class}"
        end

        raw.each do |key, val|
          type, *extra = Array(self.class::FIELDS[key.to_sym])
          instance_variable_set :"@#{key}", send(:"init_field_#{type}", key, val, *extra)
        end
      end

      # Gets fields, asserts is either nil or of given type
      def assert_of_class(key, val, klasses)
        unless Array(klasses).any? { |klass| val.is_a?(klass) }
          raise ConfigError,
                "Invalid type #{val.class} for #{self.class} field #{key.inspect}, expected #{klasses.inspect}"
        end
      end

      def init_field_string(key, val)
        assert_of_class(key, val, String)
        val
      end

      def init_field_string_array(key, vals)
        assert_of_class(key, vals, Array)
        vals.each_with_index do |val, i|
          assert_of_class("#{key}[#{i}]", val, String)
        end
        vals
      end

      def init_field_object(key, val, object_class)
        assert_of_class(key, val, Hash)
        Object.const_get("Tabry::Models::#{object_class}").new(raw: val, root: _root)
      end

      def init_field_list_object(key, val, object_class)
        assert_of_class(key, val, Array)
        Object.const_get("Tabry::Models::#{object_class}").new(raw: val, root: _root)
      end

      def init_field_boolean(key, val)
        assert_of_class(key, val, [TrueClass, FalseClass])
        val
      end

      def as_json
        self.class::FIELDS.map do |k, _|
          raw_val = send(k)
          [k, ConfigObject.as_json(raw_val)]
        end.to_h.compact
      end

      def self.as_json(val)
        if [ ConfigObject, ConfigList, ConfigStringHash ].any? { val.is_a?(_1) }
          val.as_json
        elsif val.is_a?(Array)
          val.map { as_json(_1) }
        else
          val
        end
      end
    end
  end
end
