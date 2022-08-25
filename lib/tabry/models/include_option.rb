# frozen_string_literal: true

require_relative "option_base"

module Tabry
  module Models
    class IncludeOption < OptionBase
      attr_reader :include_name, :_root

      def options(token)
        flatten.options(token)
      end

      def flatten
        inc = _root.option_includes[value]
        raise "Bad tabry config: include #{value.inspect} not found" unless inc

        inc.flatten
      end
    end
  end
end
