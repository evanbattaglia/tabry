require_relative '../runner'
require_relative '../util'
require_relative 'internals'

module Tabry
  module CLI
    class Builder
      attr_reader :config, :cli_class, :runner
      def initialize(config_name, cli_class)
        @cli_class = cli_class
        @runner = Tabry::Runner.new(config_name: config_name)
      end

      DISALLOWED_SUBCOMMAND_NAMES = %w[args flags internals]

      def run(raw_args)
        result = runner.parse(raw_args)
        check_for_correct_usage(result)

        sub = result.current_sub
        state = result.state

        met = state.subcommand_stack.join('__')
        met = 'main' if met == ''
        named_args = named_args(sub, state)

        ::Tabry::Util.debug "met: #{met.inspect}"
        ::Tabry::Util.debug "named_args: #{named_args.inspect}"

        internals = Internals.new(
          runner: runner, config: config, raw_args: raw_args,
          state: state, met: met
        )

        cli = @cli_class.new(state.flags, state.args, named_args, internals)
        cli_send_met(cli, met)
      end

      private

      def check_for_correct_usage(result)
        if result.invalid_usage? || result.help?
          puts result.usage(File.basename($0))
          exit(result.help? ? 0 : 1)
        end
      end

      def named_args(sub, state)
        # TODO final args
        res = {}
        state.args.each_with_index do |arg_val, i|
          if (arg_name = sub.args[i]&.name)
            res[arg_name] = arg_val
          end
        end
      end

      def cli_send_met(cli, met)
        if DISALLOWED_SUBCOMMAND_NAMES.include?(met)
          STDERR.puts %Q(FATAL: Tabry does not support top-level subcommands named: #{DISALLOWED_SUBCOMMAND_NAMES.join(',')})
          exit 1
        elsif !cli.respond_to?(met.to_sym)
          STDERR.puts %Q{FATAL: CLI does not support command #{met}}
          exit 1
        else
          cli.send(met.to_sym)
        end
      end
    end
  end
end

