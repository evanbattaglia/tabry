# frozen_string_literal: true

require_relative "config_error"

module Tabry
  module Models
    class ConfigList
      attr_reader :to_a, :unflattened

      include Enumerable

      def initialize(raw:, root:, klass:)
        raise "missing root" unless root

        raw ||= []
        unless raw.is_a?(Array)
          raise ConfigError, "#{self.class.name} must be an array. Got #{raw.class}"
        end

        @unflattened = raw.map { |a| klass.new(raw: a, root: root) }
      end

      def to_a
        flatten
      end

      def flatten
        @flatten ||= unflattened.map(&:flatten).flatten
      end

      def [](*args)
        to_a.[](*args)
      end

      def each(...)
        to_a.each(...)
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
