require_relative 'core_ext/string/colors'

module Tabry
  class UsageGenerator
    attr_reader :sub, :cmdline_string, :top_level

    def self.usage(sub, cmdline_string, top_level)
      new(sub, cmdline_string, top_level).usage
    end

    def initialize(sub, cmdline_string, top_level)
      @sub ||= sub
      @cmdline_string = cmdline_string
      @top_level = top_level
    end

    USAGE = "Usage:".bold

    def usage
      lines = []
      if description
        lines << description
        lines << ''
      end
      if subs.any?
        lines << "#{USAGE} #{cmdline_string} <subcommand> ..."
      end

      if args.any?
        arg_strings = args.map do |a|
          str = "<#{a.name || 'arg'}>"
          str = "[#{str}]" if a.optional
          str
        end
        lines << ["#{USAGE} #{cmdline_string}", *arg_strings].join(' ')
      end

      if subs.empty? && args.empty?
        lines << "#{USAGE} #{cmdline_string}"
      end

      usage_add_subcommands(lines, top_level)
      usage_add_args(lines)
      usage_add_flags(lines)

      lines.join("\n")
    end

    def usage_add_subcommands(lines, top_level)
      if subs.any? || top_level
        lines << ''
        lines << 'SUBCOMMANDS'.green.bold
      end

      subs_by_name = subs.by_name
      sub_names = subs_by_name.keys
      sub_names |= ['help'] if top_level

      sub_names.sort.each do |name|
        if (s = subs_by_name[name])
          name_line = name.bold
          if s.aliases&.length == 1
            name_line += " (alias: #{s.aliases.first})"
          elsif s.aliases
            name_line += " (aliases: #{s.aliases.join(', ')})"
          end

          lines << name_line
          lines << "  #{s.description}" if s.description
        elsif name == 'help'
          lines << 'help'.bold
          lines << "  Show help on command or subcommand"
        end
      end
    end

    def usage_add_flags(lines)
      if flags.any?
        lines << ''
        lines << 'FLAGS'.green.bold
        flags.map(&:name).sort.each do |name|
          flag = flags[name]
          flag_name = [flag.name, *flag.aliases].map{|al| flag.alias_with_dash(al).bold}.join(", ")
          flag_name << " <arg>" if flag.arg
          flag_name << " (required)" if flag.required
          lines << flag_name
          lines << "  #{flag.description}" if flag.description
        end
      end
    end

    def usage_add_args(lines)
      if args.any?(&:description)
        lines << ''
        lines << 'ARGS'.green.bold
        args.each do |arg|
          arg_name = arg.name.bold
          arg_name += ' (optional)' if arg.optional
          lines << arg_name
          lines << "  #{arg.description}" if arg.description
        end
      end
    end

    %i[subs flags args description].each do |met|
      define_method met do
        sub.send met
      end
    end
  end
end

