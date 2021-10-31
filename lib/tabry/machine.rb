require_relative 'state'
require_relative 'util'

# The core Tabry state machine / parser which reads tokens, figures out if it's
# a sub/flag/arg/etc. and advances the state
#
# The output is a State object -- the final state of the machine.
module Tabry
  class Machine
    attr_reader :state, :config

    # Returns a state
    def self.run(config, tokens)
      machine = new(config)
      machine.run(tokens)
      machine.state
    end

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

    private
    def step(token)
      send :"step_#{state.mode}", token
    end

    def current_sub
      # TODO a bit of a waste to look this up every time.
      config.dig_sub(state.subcommand_stack)
    end

    # usage? arg?

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
  end
end
