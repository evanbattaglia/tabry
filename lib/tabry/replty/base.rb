# frozen_string_literal: true

require_relative "../cli/arg_proxy" # TODO: shared code now, probably move out of cli dir
require_relative "../cli/flag_proxy" # TODO: shared code now, probably move out of cli dir

module Tabry
  module Replty
    class Base
      attr_reader :internals, :args, :flags

      def internals=(internals)
        @internals = internals
        @args = ::Tabry::CLI::ArgProxy.new(internals.state.args, internals.result.named_args)
        @flags = ::Tabry::CLI::FlagProxy.new(internals.state.flags)
      end

      # NOTE: internal functions (besides internal/args/flags) start with "tabry_"; reconsider scheme
      def tabry_prompt
        "> "
      end
    end
  end
end
