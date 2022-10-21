# frozen_string_literal: true

require_relative "../runner"
require_relative "../util"
require_relative "internals"

module Tabry
  module CLI
    class Builder
      attr_reader :config, :cli_class, :runner

      def initialize(config_name, cli_class)
        @cli_class = cli_class
        @runner = Tabry::Runner.new(config_name: config_name)
      end

      DISALLOWED_SUBCOMMAND_NAMES = %w[args flags internals].freeze

      def run(raw_args)
        result = runner.parse(raw_args)
        check_for_correct_usage(result)

        state = result.state

        met = state.subcommand_stack.join("__").gsub("-", "_")

        ::Tabry::Util.debug "met: #{met.inspect}"
        ::Tabry::Util.debug "named_args: #{result.named_args.inspect}"

        internals = Internals.new(
          runner: runner, config: config, raw_args: raw_args,
          state: state, met: met, result: result
        )

        cli = instantiate_cli(@cli_class, internals)
        actual_cli, actual_met = get_cli_object_and_met(cli, met, internals)

        cli_send_met(actual_cli, actual_met)
      end

      private

      def check_for_correct_usage(result)
        if result.help?
          puts result.usage(File.basename($0))
          exit 0
        elsif result.invalid_usage_reason
          puts "Invalid usage: #{result.invalid_usage_reason}"
          puts
          puts result.usage(File.basename($0))
          exit(1)
        end
      end

      def instantiate_cli(klass, internals)
        return klass unless klass.is_a?(Class)

        state = internals.state
        klass.new(state.flags, state.args, internals.result.named_args, internals)
      end

      # Recursively look through sub_routes for the CLI to be used
      def get_cli_object_and_met(cli, met, internals)
        if DISALLOWED_SUBCOMMAND_NAMES.include?(met)
          warn %(FATAL: Tabry does not support top-level subcommands named: #{DISALLOWED_SUBCOMMAND_NAMES.join(",")})
          exit 1
        end

        return [cli, "main"] if met.to_s == ""

        sub_route_clis = cli.class.instance_variable_get(:@sub_route_clis)
        sub_name, rest = met.split("__", 2)

        if sub_route_clis&.dig(sub_name)
          # Instantiate CLI if it hasn't already (and store instantiation)
          sub_route_clis[sub_name] = instantiate_cli(sub_route_clis[sub_name], internals)
          opts = cli.class.instance_variable_get(:@sub_route_clis_opts)[sub_name]

          new_met_name = opts[:full_method_name] ? met : rest
          get_cli_object_and_met(sub_route_clis[sub_name], new_met_name, internals)
        else
          [cli, met]
        end
      end

      def cli_send_met(cli, met)
        if cli.respond_to?(met.to_sym)
          run_hooks(cli, met, :@before_actions)
          cli.send(met.to_sym)
          run_hooks(cli, met, :@after_actions)
        else
          warn %(FATAL: CLI does not support command #{met})
          exit 1
        end
      end

      def run_hooks(cli, met, instance_var)
        met = met.to_s
        cli.class.instance_variable_get(instance_var)&.each do |hook, opts|
          next if Array(opts&.dig(:except))&.map(&:to_s)&.include?(met.to_s)
          next if opts&.dig(:only) && !Array(opts[:only])&.map(&:to_s)&.include?(met.to_s)

          hook.is_a?(Proc) ? cli.instance_eval(&hook) : cli.send(hook.to_sym)
        end
      end
    end
  end
end
