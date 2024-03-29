# frozen_string_literal: true

require_relative "core_ext/string/colors"

module Tabry
  class UsageGenerator
    attr_reader :sub, :cmdline_string, :top_level, :sub_stack

    def initialize(sub_stack, cmd_name)
      @sub_stack = sub_stack
      @sub = sub_stack.last
      non_main_subs = sub_stack[1..]
      @cmdline_string = [cmd_name, *non_main_subs.map(&:name)].join(" ")
      @top_level = sub_stack.length == 1
    end

    USAGE = "Usage:".bold

    def usage
      lines = []
      if description
        lines << description
        lines << ""
      end
      if subs.any?
        lines << "#{USAGE} #{cmdline_string} <subcommand> ..."
      end

      if args.any?
        arg_strings = args.map do |a|
          name = a.title || "arg"
          str = "<#{name}>"
          str += " [<#{name}>...]" if a.varargs?
          str = "[#{str}]" if a.optional
          str
        end
        lines << ["#{USAGE} #{cmdline_string}", *arg_strings].join(" ")
      end

      if subs.empty? && args.empty?
        lines << "#{USAGE} #{cmdline_string}"
      end

      usage_add_subcommands(lines, top_level)
      usage_add_args(lines)
      usage_add_flags(lines)

      lines.join("\n")
    end

    def add_text_with_indent(lines, text, indent_string)
      return unless text

      text.split("\n").each do |line|
        lines << (indent_string + line)
      end
    end

    def usage_add_subcommands(lines, top_level)
      if subs.any? || top_level
        lines << ""
        lines << "SUBCOMMANDS".green.bold
      end

      subs_by_name = subs.by_name
      sub_names = subs_by_name.keys
      sub_names |= ["help"] if top_level

      sub_names.sort.each do |name|
        if (s = subs_by_name[name])
          name_line = name.bold
          if s.aliases&.length == 1
            name_line += " (alias: #{s.aliases.first})"
          elsif s.aliases
            name_line += " (aliases: #{s.aliases.join(", ")})"
          end

          lines << name_line
          add_text_with_indent(lines, s.description, "  ")
        elsif name == "help"
          lines << "help".bold
          lines << "  Show help on command or subcommand"
        end
      end
    end

    def usage_add_flags(lines)
      partial_sub_stack = []
      sub_stack_with_names = sub_stack.map do |sub|
        partial_sub_stack << sub.name
        [sub, partial_sub_stack.compact.join(" ")]
      end

      sub_stack_with_names.reverse.each do |sub, full_sub_name|
        next unless sub.flags.any?

        lines << ""
        lines << "FLAGS".green.bold
        if sub != sub_stack.last
          lines[-1] += if full_sub_name == ""
                         " (global)".green.bold
                       else
                         " (#{full_sub_name})".green.bold
                       end
        end

        sub.flags.map(&:name).sort.each do |name|
          flag = sub.flags[name]
          flag_name = [flag.name, *flag.aliases].map { |al| flag.alias_with_dash(al).bold }.join(", ")
          flag_name << " <arg>" if flag.arg
          flag_name << " (required)" if flag.required
          lines << flag_name
          add_text_with_indent(lines, flag.description, "  ")
        end
      end
    end

    def usage_add_args(lines)
      if args.any?(&:description)
        lines << ""
        lines << "ARGS".green.bold
        args.each do |arg|
          arg_name = arg.name.bold
          arg_name += " (optional)" if arg.optional
          lines << arg_name
          add_text_with_indent(lines, arg.description, "  ")
        end
      end
    end

    %i[subs args description].each do |met|
      define_method met do
        sub.send met
      end
    end
  end
end
