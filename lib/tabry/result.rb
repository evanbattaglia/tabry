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

    def invalid_usage?
      !current_sub.can_be_used_with_n_args?(state.args.count)
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
