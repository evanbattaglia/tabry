module Tabry
  class OptionsFinder
    attr_reader :result

    # Returns an array of options
    def self.options(result, token)
      new(result).options(token)
    end

    def initialize(result)
      @result = result
    end

    def options(token)
      send(:"options_#{state.mode}", token || '')
    end

    private
    def state
      result.state
    end

    def current_sub
      @current_sub ||= result.current_sub
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
