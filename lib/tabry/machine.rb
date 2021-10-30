require_relative 'state'

module Tabry
  class Machine
    attr_reader :state
    def initialize(config)
      @state = State.new(mode: :subcommand, subcommand_stack: [], args: [], flags: {}, usage: nil)
    end

    def run(tokens)
      tokens.each do |token|
        step(token)
        puts "AFTER token #{token.inspect}"
        puts "STATE: #{state.inspect}"
      end
    end

    def step(token)
      send :"step_#{state.mode}", token
    end

    # usage? arg?

    def current_sub
      # TODO: inefficient to call this a lot, slightly i guess
      state.subcommand_stack.reduce(config.main) { |sub, sub_name| sub.subs[sub_name] }
    end

    def step_subcommand(token)
      step_subcommand_match_subcommand(token)
      || step_subcommand_match_dashdash(token)
      || step_subcommand_match_flag(token)
      || step_subcommand_match_arg(token)
      # TODO: no match
    end

    def step_subcommand_match_subcommand(token)
      return false unless state.args.empty?
      sub = current_sub.subs.match(token)
      return false unless sub

      state.subcommand_stack << sub.name
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
      flag, arg_value = current_sub.flags.match(token, state.flags)
      return false unless flag

      if arg_value
        state.flags[flag.name] = arg_value
      elsif flag.arg
        state.mode = :flag
        state.current_flag = flag.name
      else
        state.flags[flag.name] = true
      end

      true
    end

    # TODO: usages will be quite tricky, skip for now...
    # this accepts anything, for now...
    def step_subcommand_match_args(token)
      state.args << token

      true
    end

    # Accepts anything, for now
    def step_flagarg(token)
      state.flags[state.current_flag_name] = token
      true
    end

    def options
      send :"options_#{state.mode}"
    end

    def options_subcommand(token)
      options_subcommand_subs(token) |
        options_subcommand_flags(token) |
        options_subcommand_args(token)
    end

    def options_flagarg(token)
      current_sub.flags[state.current_flag].options.options(token)
    end

    def options_subcommand_subs(token)
      current_sub.subs.options(token)
    end

    def options_subcommand_flags(token)
      current_sub.flags.options(token, state.used_flags_hash)
    end

    # TODO usages
    # TODO final_args, maybe it should be part of args list
    def options_subcommand_args(token)
      current_sub.args.options[state.args.length]&.options&.options(token) || []
    end
  end
end
