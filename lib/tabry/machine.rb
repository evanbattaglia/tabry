require_relative 'state'
require_relative 'util'

module Tabry
  class Machine
    attr_reader :state, :config

    def initialize(config)
      @config = config
      @state = State.new(mode: :subcommand, subcommand_stack: [], args: [], flags: {}, usage: nil)
    end

    def run(tokens)
      tokens.each do |token|
        step(token)
        Tabry::Util.debug "AFTER token #{token.inspect}"
        Tabry::Util.debug "STATE: #{state.inspect}"
      end
    end

    def step(token)
      send :"step_#{state.mode}", token
    end

    # usage? arg?

    def current_sub
      # TODO: inefficient to call this a lot, slightly i guess
      config.dig_sub(state.subcommand_stack)
    end

    def step_subcommand(token)
      step_subcommand_match_subcommand(token) ||
        step_subcommand_match_dashdash(token) ||
        step_subcommand_match_flag(token) ||
        step_subcommand_match_help(token) ||
        step_subcommand_match_arg(token)
    end

    def step_subcommand_match_help(token)
      return false if state.help
      return false unless state.mode == :subcommand
      if (state.subcommand_stack.empty? && token == 'help') ||
         (!state.dashdash && (token == '--help' || token == '-?'))
        state.help = true
        Tabry::Util.debug "MATCHED help ON token #{token.inspect}"
        return true
      end
      false
    end

    def step_subcommand_match_subcommand(token)
      return false unless state.args.empty?
      sub = current_sub.subs.match(token)
      return false unless sub

      state.subcommand_stack << sub.name
      Tabry::Util.debug "MATCHED sub #{sub.name} ON token #{token.inspect}"
      true
    end

    def step_subcommand_match_dashdash(token)
      return false if state.dashdash
      return false unless token == '--'

      state.dashdash = true
      true
    end


    def step_subcommand_match_flag(token)
      return false if state.dashdash
      flag, arg_value = current_sub.flags.match(token)
      return false unless flag

      if arg_value
        state.flags[flag.name] = arg_value
      elsif flag.arg
        state.mode = :flagarg
        state.current_flag = flag.name
      else
        state.flags[flag.name] = true
      end

      Tabry::Util.debug "MATCHED flag #{flag.name} ON token #{token.inspect}"
      true
    end

    # TODO: usages will be quite tricky, skip for now...
    # this accepts anything, for now...
    def step_subcommand_match_arg(token)
      state.args << token

      Tabry::Util.debug "MATCHED arg ON token #{token.inspect}"
      true
    end

    # Accepts anything, for now
    def step_flagarg(token)
      state.flags[state.current_flag] = token
      state.mode = :subcommand
      true
    end

    def options(token)
      send(:"options_#{state.mode}", token || '')
    end

    def options_subcommand(token)
      options_subcommand_subs(token) |
        options_subcommand_flags(token) |
        options_subcommand_args(token)
    end

    def options_flagarg(token)
      current_sub.flags[state.current_flag].options&.options(token) || []
    end

    def options_subcommand_subs(token)
      if state.args.any?
        # once an arg has been given, can no longer use a subcommand
        []
      else
        current_sub.subs.options(token)
      end
    end

    def options_subcommand_flags(token)
      current_sub.flags.options(token, state.flags)
    end

    # TODO usages
    # TODO final_args, maybe it should be part of args list
    def options_subcommand_args(token)
      current_sub.args[state.args.length]&.options&.options(token) || []
    end
  end
end
