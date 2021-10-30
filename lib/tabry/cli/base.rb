require_relative 'arg_proxy'
require_relative 'flag_proxy'

module Tabry
  module CLI
    class Base
      attr_reader :args, :flags, :internals
      def initialize(flags, args, named_args, internals)
        @args = ArgProxy.new(args, named_args)
        @flags = FlagProxy.new(flags)
        @internals = internals
      end
    end
  end
end

