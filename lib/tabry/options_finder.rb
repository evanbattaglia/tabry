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
      if token.to_s == ''
        result.sub_stack.each do |sub|
          required_flag = sub.flags.first_required_flag(used: state.flags)
          if required_flag
            return [required_flag.name_with_dashes]
          end
        end
      end

      options_subcommand_subs(token) |
        options_subcommand_flags(token) |
        options_subcommand_args(token)
    end

    def options_flagarg(token)
      result.sub_stack.map do |sub|
        sub.flags[state.current_flag]&.options&.options(token)
      end.compact.flatten.uniq
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
      result.sub_stack.map{|sub| sub.flags.options(token, used: state.flags)}.flatten.uniq
    end

    def options_subcommand_args(token)
      if current_sub.args.n_passed_in_varargs(state.args.length) > 0
        arg = current_sub.args.varargs_arg
      else
        arg = current_sub.args[state.args.length]
      end

      arg&.options&.options(token) || []
    end
  end
end
