require_relative 'usage_generator'

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
      @current_sub ||= config.dig_sub(state.subcommand_stack)
    end

    # TODO have this return reason why invalid
    def invalid_usage_reason
      waiting_on_flag_arg? ||
        wrong_number_of_args? ||
        missing_required_flags?
    end

    def invalid_usage?
      invalid_usage_reason
    end

    def waiting_on_flag_arg?
      if state.mode != :subcommand
        "arg required for flag #{state.current_flag}"
      end
    end

    def wrong_number_of_args?
      n_args = state.args.length
      if n_args == 0 && current_sub.subs.any?
        if current_sub.args.any?
          "missing subcommand or arg(s)"
        else
          "missing subcommand"
        end
      elsif !(current_sub.min_args..current_sub.max_args).include?(n_args)
        if n_args == 0
          if current_sub.max_args == 1
            msg = "missing argument"
            msg << " #{current_sub.args[0].name.inspect}" if current_sub.args[0].name
            msg
          elsif current_sub.min_args == 1
            "missing one or more args"
          else
            "missing args"
          end
        else
          "got #{state.args.count} args, " +
            "must be between #{current_sub.min_args} and #{current_sub.max_args}"
        end
      end
    end

    def missing_required_flags?
      current_sub.flags.each do |flag|
        if flag.required && !state.flags[flag.name]
          return "missing required flag #{flag.name}"
        end
      end
      nil
    end

    def usage(cmd_name=nil)
      cmd_name ||= config.cmd
      cmdline_string = [cmd_name, *state.subcommand_stack].join(' ')
      Tabry::UsageGenerator.new(current_sub, cmdline_string, top_level?).usage
    end

    def top_level?
      state.subcommand_stack.empty?
    end

    def help?
      state.help || (state.args & %w[-? --help]).any?
    end
  end
end
