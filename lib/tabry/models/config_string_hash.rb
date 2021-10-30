module Tabry
  module Models
    class ConfigStringHash
      attr_reader :to_h
      include Enumerable

      def initialize(arr, klass)
        unless arr.is_a?(Hash)
          raise "#{self.class.name} must be an hash. Got #{arr.class}"
        end
        unless arr.keys.all?{|k| k.is_a?(String)}
          raise "#{self.class.name} keys must all be string keys."
        end

        @to_h = arr.transform_values{|a| klass.new(a)}
      end

      def [](*args)
        to_h.[](*args)
      end

      def each(*args, &blk)
        to_h.each(*args, &blk)
      end
    end
  end
end
