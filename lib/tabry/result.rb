# frozen_string_literal: true

require_relative "usage_generator"

# Encapsulates a config and state, often representing the end state (except
# when you call options()), and adds functionality regarding this state.
module Tabry
  class Result
    attr_reader :config, :state

    def initialize(config, state)
      @config = config
      @state = state
    end

    def current_sub
      @current_sub ||= sub_stack.last
    end

    def sub_stack
      @sub_stack ||= config.dig_sub_array(state.subcommand_stack)
    end

    def invalid_usage_reason
      waiting_on_flag_arg? ||
        wrong_number_of_args? ||
        missing_required_flags? ||
        nil
    end

    def waiting_on_flag_arg?
      if state.mode != :subcommand
        "arg required for flag #{state.current_flag}"
      end
    end

    def wrong_number_of_args?
      n_args = state.args.length
      # This could use some tweaking. I'm not at which point a subcommand
      # should be considered to be invalid with no arguments... if it has a
      # subcommand it's a good sign, but if it also has an optional argument
      # that means it's OK. Probably need another "no_args" construct.
      if n_args == 0 && current_sub.subs.any? && !(current_sub.args.any? && current_sub.min_args == 0)
        if current_sub.args.any?
          "missing subcommand or arg(s)"
        else
          "missing subcommand"
        end
      elsif !(current_sub.min_args..current_sub.max_args).include?(n_args)
        if n_args == 0
          if current_sub.max_args == 1
            msg = "missing argument"
            msg += " #{current_sub.args[0].name.inspect}" if current_sub.args[0].name
            msg
          elsif current_sub.min_args == 1
            "missing one or more args"
          else
            "missing args"
          end
        else
          "got #{state.args.count} args, " \
            "must be between #{current_sub.min_args} and #{current_sub.max_args}"
        end
      end
    end

    def non_varargs
      @non_varargs ||= state.args.first(state.args.length - n_passed_in_varargs)
    end

    def varargs
      @varargs ||= state.args.last(n_passed_in_varargs)
    end

    def n_passed_in_varargs
      current_sub.args.n_passed_in_varargs(state.args.count)
    end

    def missing_required_flags?
      current_sub.flags.each do |flag|
        if flag.required && !state.flags[flag.name]
          return "missing required flag #{flag.name}"
        end
      end
      false
    end

    def usage(cmd_name = nil)
      cmd_name ||= config.cmd
      Tabry::UsageGenerator.new(sub_stack, cmd_name).usage
    end

    def top_level?
      state.subcommand_stack.empty?
    end

    def help?
      state.help
    end

    def named_args
      @named_args ||= {}.tap do |res|
        if (varargs_name = current_sub.args.varargs_arg&.name)
          res[varargs_name] = varargs
        end

        non_varargs.each_with_index do |arg_val, i|
          if (arg_name = current_sub.args[i]&.name)
            res[arg_name] = arg_val
          end
        end
      end
    end

    def current_flags_for_flagargs
      sub_stack.map do |sub|
        flag = sub.flags[state.current_flag]
        flag if flag&.arg
      end.compact
    end

    def expected_arg
      if current_sub.args.n_passed_in_varargs(state.args.length) > 0
        current_sub.args.varargs_arg
      else
        current_sub.args[state.args.length]
      end
    end
  end
end
