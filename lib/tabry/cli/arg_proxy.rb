require_relative 'flag_proxy'

module Tabry
  module CLI
    class ArgProxy
      include Enumerable

      def initialize(args, named_args, reqd=false)
        @args = args
        @named_args = FlagProxy.new(named_args)
        @raw_named_args = named_args
        @reqd = reqd
        @reqd_arg_proxy = ArgProxy.new(args, named_args, true) unless @reqd
      end

      def each(*args, &blk)
        @args.each(*args, &blk)
      end

      def [](key)
        if key.is_a?(Integer)
          res = @args[key]
          if @reqd && !res
            STDERR.puts "FATAL: Missing required argument number #{key+1}"
            exit 1
          end
        else
          key = key.to_s
          res = @named_args[key]
          if @reqd && !res
            STDERR.puts "FATAL: Missing required argument #{key}"
            exit 1
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
        @args.<=>(*args)
      end

      def method_missing(met, *args)
        self[met]
      end

      def respond_to?(met, p2)
        super(met, p2) || @named_args.respond_to?(met, p2)
      end

      def inspect
        "ArgProxy: #{@args.inspect}, #{@raw_named_args.inspect}"
      end

      def to_s
        "ArgProxy: #{@args.to_s}, #{@raw_named_args.inspect}"
      end

      def reqd
        @reqd_arg_proxy or raise 'no reqd.reqd'
      end
    end
  end
end

