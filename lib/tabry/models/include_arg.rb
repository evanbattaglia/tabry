# frozen_string_literal: true

module Tabry
  module Models
    class IncludeArg
      attr_reader :include_name, :_root

      def initialize(raw:, root:)
        @include_name = raw["include"]
        @_root = root
      end

      def flatten
        inc = _root.arg_includes[include_name]
        raise "no include found for #{include_name}" unless inc
        inc.args.flatten
      end
    end
  end
end
