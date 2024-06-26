# frozen_string_literal: true

require_relative "flag_proxy"

module Tabry
  module CLI
    class ArgProxy
      include Enumerable

      def initialize(args, named_args, reqd: false)
        @args = args
        @named_args = FlagProxy.new(named_args)
        @raw_named_args = named_args
        @reqd = reqd
        @reqd_arg_proxy = ArgProxy.new(args, named_args, reqd: true) unless @reqd
      end

      def each(&blk)
        @args.each(&blk)
      end

      def [](key)
        if key.is_a?(Integer)
          res = @args[key]
          if @reqd && !res
            warn "FATAL: Missing required argument number #{key + 1}"
            Kernel.exit 1
          end
        else
          key = key.to_s
          res = @named_args[key]
          if @reqd && !res
            warn "FATAL: Missing required argument #{key}"
            Kernel.exit 1
          end
        end
        res
      end

      def slice(*keys)
        [keys].flatten.each_with_object({}) do |key, result_hash|
          result_hash[key] = self[key]
        end
      end

      def <=>(*args)
        @args.send(:<=>, *args)
      end

      def method_missing(met)
        self[met]
      end

      def respond_to_missing?(*_args)
        true # Anything could be an arg name that we haven't set
      end

      def inspect
        "ArgProxy: #{@args.inspect}, #{@raw_named_args.inspect}"
      end

      def to_s
        "ArgProxy: #{@args}, #{@raw_named_args.inspect}"
      end

      def reqd
        @reqd_arg_proxy or raise "no reqd.reqd"
      end
    end
  end
end
