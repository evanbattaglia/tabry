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
        @config = runner.config
      end

      DISALLOWED_SUBCOMMAND_NAMES = %w[args flags internals]

      def run(raw_args)
        state = runner.parse(raw_args)
        sub = config.dig_sub(state.subcommand_stack)

        check_for_correct_usage(sub, state)

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

      def check_for_correct_usage(sub, state)
        if show_usage?(sub, state)
          cmd_name = File.basename($0)
          cmd_with_subs = [cmd_name, *state.subcommand_stack].join(' ')
          puts sub.usage(cmd_with_subs)
          exit 1
        end
      end

      def show_usage?(sub, state)
        invalid_usage?(sub, state) ||
          help_flag_passed?(state)
      end

      def invalid_usage?(sub, state)
        !sub.can_be_used_with_n_args?(state.args.count)
      end

      def help_flag_passed?(state)
        (state.args & %w[-? --help]).any?
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

