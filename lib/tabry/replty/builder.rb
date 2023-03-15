# frozen_string_literal: true

require "readline"
require_relative "../cli/internals" # TODO: bring out of cli if shared code now, probably
require_relative "../shell_tokenizer"
require_relative "../runner"

module Tabry
  module Replty
    class Builder
      attr_reader :runner, :repl

      # TODO: dry up with CLI builder if appropriate
      # TODO: implement before_action, after_action, sub-REPLs; share code in run_result with CLI::Builder

      def initialize(config, repl)
        @runner = Tabry::Runner.new(config: config)
        @repl = repl
      end

      def readline
        Readline.readline(repl.tabry_prompt, true)
      rescue Interrupt
        puts "^C"
        retry
      end

      def load_history(file)
        return unless file

        File.open(file) do |f|
          f.each do |l|
            Readline::HISTORY.push l.chomp
          end
        end
      rescue Errno::ENOENT # rubocop:disable Lint/SuppressedException
      end

      def save_history(file, max_size = 10000)
        return unless file

        history = Readline::HISTORY.each

        # Skip over excess elements:
        (Readline::HISTORY.length - max_size).times do
          history.next
        end

        File.open(file, "w") do |f|
          loop { f.puts history.next }
        end
      end

      def run(history_file: nil, tokenizer: ShellTokenizer)
        history_file = history_file&.gsub(%r{^~/}, "#{Dir.home}/")
        load_history(history_file)

        Readline.completion_proc = proc do
          cmd, args, last_arg = tokenizer.split_with_comppoint(Readline.line_buffer, Readline.point)
          options = runner.options([cmd, *args].compact, last_arg)
          options.map do |opt|
            # TODO: a bit weird since args/flags are wrong/old when completion method is run
            # also filter to start_with? is more appropriate in tabry, not here, but whatever
            opt.is_a?(Symbol) ? repl.send(opt)&.select { |x| x.start_with?(last_arg) } : opt
          end.flatten
        end

        while (cmdline = readline)
          raw_args = tokenizer.split(cmdline)
          next if raw_args.empty?

          result = runner.parse(raw_args)
          # TODO: usage has "myrepl" (command name) in; also, "got 1 args" is confusing when command doesn't exist
          if result.help?
            puts result.usage
          elsif result.invalid_usage_reason
            puts "Invalid usage: #{result.invalid_usage_reason}"
            puts
            puts result.usage
          else
            run_result(raw_args, result)
          end
        end

        save_history(history_file)
      end

      def run_result(raw_args, result)
        met = result.state.subcommand_stack.join("__").gsub("-", "_")
        repl.internals = ::Tabry::CLI::Internals.new(
          runner: runner, raw_args: raw_args,
          state: result.state, met: met, result: result
        )
        catch(:tabry_replty_command_exit) do
          repl.send(met.to_sym)
        end
      end
    end
  end
end
