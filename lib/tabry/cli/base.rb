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

      def self.after_action(*method_names, only: nil, except: nil, &blk)
        [*method_names, blk].compact.each do |met|
          (@after_actions ||= []) << [met, {only: only, except: except}]
        end
      end

      def self.before_action(*method_names, only: nil, except: nil, &blk)
        [*method_names, blk].compact.each do |met|
          (@before_actions ||= []) << [met, {only: only, except: except}]
        end
      end
    end
  end
end

