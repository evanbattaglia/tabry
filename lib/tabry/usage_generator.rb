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

    def usage
      lines = []
      if description
        lines << description
        lines << ''
      end
      if subs.any?
        lines << "Usage: #{cmdline_string} <subcommand> ..."
      end

      if args.any?
        lines << ["Usage: #{cmdline_string}", *args.map{|a| "<#{a.name || 'arg'}>"}].join(' ')
      end

      if subs.empty? && args.empty?
        lines << "Usage: #{cmdline_string}"
      end

      usage_add_subcommands(lines, top_level)
      usage_add_flags(lines)
    end

    def usage_add_subcommands(lines, top_level)
      if subs.any? || top_level
        lines << ''
        lines << 'SUBCOMMANDS'
      end

      subs_by_name = subs.by_name
      sub_names = subs_by_name.keys
      sub_names |= ['help'] if top_level

      sub_names.sort.each do |name|
        if (s = subs_by_name[name])
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

    %i[subs flags args description].each do |met|
      define_method met do
        sub.send met
      end
    end
  end
end

