require_relative 'config_list'

module Tabry
  module Models
    class ConfigList
      attr_reader :to_a
      include Enumerable

      def initialize(raw:, root:, klass:)
        raise 'missing root' unless root

        raw ||= []
        unless raw.is_a?(Array)
          raise "#{self.class.name} must be an array. Got #{arr.class}"
        end

        @to_a = raw.map{|a| klass.new(raw: a, root: root)}
      end

      def [](*args)
        to_a.[](*args)
      end

      def each(*args, &blk)
        to_a.each(*args, &blk)
      end

      def length
        to_a.length
      end

      def empty?
        to_a.empty?
      end
    end
  end
end

