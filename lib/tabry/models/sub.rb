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
        return false if n_args == 0 && subs.any?
        (min_args..max_args).include?(n_args)
      end

      def min_args
        args.reject(&:optional).count
      end

      def max_args
        return Float::INFINITY if final_args
        args.count
      end

      def usage(cmd_name, add_help: false)
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

        usage_add_subcommands(lines, add_help)
        usage_add_flags(lines)
      end

      def usage_add_subcommands(lines, add_help)
        if subs.any? || add_help
          lines << ''
          lines << 'SUBCOMMANDS'
        end

        sub_names = subs.keys
        sub_names |= ['help'] if add_help

        sub_names.sort.each do |name|
          if (s = subs[name])
            lines << name
            lines << "  #{s.description}" if s.description
          elsif name == 'help'
            lines << 'help'
            lines << "  Show help on command or subcommand"
          end
        end
      end

      def usage_add_flags(lines)
        if flags.any?
          lines << ''
          lines << 'FLAGS'
          flags.each do |flag|
            flag_name = [flag.name, *flag.aliases].map{|al| flag.alias_with_dash(al)}.join(", ")
            flag_name << " <arg>" if flag.arg
            lines << flag_name
            lines << "  #{flag.description}" if flag.description
          end
        end

        lines.join("\n")
      end
    end
  end
end
