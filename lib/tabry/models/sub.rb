require_relative 'args_list'
require_relative 'flags_list'
require_relative 'usages_list'
require_relative 'final_args'
require_relative 'subs_list'
require_relative 'include_sub'

module Tabry
  module Models
    class Sub < ConfigObject
      def self.new(**args)
        hash = args[:raw]
        if hash['include']
          IncludeSub.new(**args)
        else
          super(**args)
        end
      end

      FIELDS = {
        aliases: :string_array,
        args: [:list_object, :ArgsList],
        description: :string,
        final_args: [:object, :FinalArgs],
        flags: [:list_object, :FlagsList],
        name: :string,
        subs: [:list_object, :SubsList],
        usages: [:list_object, :UsagesList],
      }

      attr_reader *FIELDS.keys

      # TODO put this default stuff into ConfigObject
      def subs; @subs ||= SubsList.new(raw: [], root: _root); end
      def flags; @flags ||= FlagsList.new(raw: [], root: _root); end
      def usages; @usages ||= UsagesList.new(raw: [], root: _root); end
      def args; @args ||= ArgsList.new(raw: [], root: _root); end

      def flatten
        self
      end

      def min_args
        args.reject(&:optional).count
      end

      def max_args
        return Float::INFINITY if final_args
        args.count
      end
    end
  end
end
