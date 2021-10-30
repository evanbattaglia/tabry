module Tabry
  module Models
    class ConfigStringHash
      attr_reader :to_h
      include Enumerable

      def initialize(hash, klass)
        hash ||= {}
        unless hash.is_a?(Hash)
          raise "#{self.class.name} must be an hash. Got #{hash.class}"
        end
        unless hash.keys.all?{|k| k.is_a?(String)}
          raise "#{self.class.name} keys must all be string keys."
        end

        @to_h = hash.transform_values{|a| klass.new(a)}
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
