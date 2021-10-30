require_relative 'args_list'
require_relative 'flags_list'
require_relative 'usages_list'
require_relative 'final_args'
require_relative 'subs'

module Tabry
  module Models
    class Sub < ConfigObject
      FIELDS = {
        aliases: :string_array,
        args: [:list_object, :ArgsList],
        flags: [:list_object, :FlagsList],
        usages: [:list_object, :UsagesList],
        description: :string,
        final_args: [:object, :FinalArgs],
        subs: [:object, :Subs],
      }

      attr_reader *FIELDS.keys

      # TODO put this default stuff into ConfigObject
      def subs; @subs ||= Subs.new({}); end
      def flags; @flags ||= FlagsList.new([]); end
      def usages; @usages ||= UsagesList.new([]); end
      def args; @args ||= ArgsList.new([]); end

      def can_be_used_with_n_args?(n_args)
        if subs.any?
          false
        elsif args.length == n_args
          # TODO: optional arguments and final args
          true
        else
          false
        end
      end

      def usage(cmd_name)
        lines = []
        if description
          lines << description
          lines << ''
        end
        if subs.any?
          lines << "Usage: #{cmd_name} <subcommand> ..."
        end
        if args.any?
          lines << ["Usage: #{cmd_name}", *args.map{|a| "<#{a.name}>" || '<arg>'}].join(' ')
        end
        if subs.empty? && args.empty?
          lines << "Usage: #{cmd_name}"
        end

        if subs.any?
          lines << ''
          lines << 'SUBCOMMANDS'
          subs.each do |name, s|
            lines << name
            lines << "  #{s.description}" if s.description
          end
        end

        if flags.any?
          lines << ''
          lines << 'FLAGS'
          flags.each do |flag|
            lines << [flag.name, *flag.aliases].map{|al| flag.alias_with_dash(al)}.join(", ")
            lines << "  #{flag.description}" if flag.description
          end
        end

        lines.join("\n")
      end
    end
  end
end
