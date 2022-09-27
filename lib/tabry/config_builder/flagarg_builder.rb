# frozen_string_literal: true

require_relative "arg_or_flag_builder"

module Tabry
  module ConfigBuilder
    class FlagargBuilder < ArgOrFlagBuilder
      def _init(*args)
        super(*args)
        _set :arg, true
      end
    end
  end
end
