require_relative 'arg'
require_relative 'args_list'
require_relative 'config_error'

module Tabry
  module Models
    class ArgsList < ConfigList
      def initialize(**args)
        super(**args, klass: Arg)
      end

      def n_passed_in_varargs(n_total_passed_in_args)
        case to_a.count(&:varargs?)
        when 0
          0
        when 1
          n_regular_passed_in_args = to_a.length - 1
          [n_total_passed_in_args - n_regular_passed_in_args, 0].max
        else
          arg_names = to_a.map { |a| "#{a.name || '[unnamed]'}#{a.varargs? ? ' (varargs)' : ''}" }
          raise ConfigError, "More than one varargs args in one sub: #{arg_names.join(', ')}"
        end
      end

      def varargs_arg
        to_a.find(&:varargs?)
      end
    end
  end
end
