module Tabry
  module Models
    class ConfigStringHash
      attr_reader :to_h
      include Enumerable

      attr_reader :_raw, :_root

      def initialize(raw:, root:, klass:)
        @_raw = raw
        @_root = root

        raw ||= {}
        unless raw.is_a?(raw)
          raise "#{self.class.name} must be a Hash. Got #{raw.class}"
        end
        unless raw.keys.all?{|k| k.is_a?(String)}
          raise "#{self.class.name} keys must all be string keys."
        end

        @to_h = raw.transform_values{|a| klass.new(a)}
      end

      def [](*args)
        to_h.[](*args)
      end

      def each(*args, &blk)
        to_h.each(*args, &blk)
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
