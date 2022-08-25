# frozen_string_literal: true

require_relative "config_error"

module Tabry
  module Models
    class ConfigStringHash
      attr_reader :to_h, :_raw, :_root

      include Enumerable

      def initialize(raw:, root:, klass:)
        @_raw = raw
        @_root = root

        raw ||= {}
        unless raw.is_a?(Hash)
          raise ConfigError, "#{self.class.name} must be a Hash. Got #{raw.class}"
        end
        unless raw.keys.all? { |k| k.is_a?(String) }
          raise ConfigError, "#{self.class.name} keys must all be string keys."
        end

        @to_h = raw.transform_values { |a| klass.new(raw: a, root: root) }
      end

      def [](*args)
        to_h.[](*args)
      end

      def each(...)
        to_h.each(...)
      end

      def empty?
        to_h.empty?
      end

      def keys
        to_h.keys
      end
    end
  end
end
