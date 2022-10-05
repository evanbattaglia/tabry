# frozen_string_literal: true

require "shellwords"
require "yaml"
require_relative "../../util"
require_relative "../../runner"
require_relative "../../shell_splitter"

# Bash-specific entrypoint, taking COMP_WORDS and COMP_CWORDS and returning possible options
module Tabry
  module Bash
    module Wrapper
      def self.run(cmd_line, comp_point, config: nil)
        cmd_name, args, last_arg = Tabry::ShellSplitter.split(cmd_line, comp_point)
        opts = Tabry::Runner.new(config_name: config || cmd_name).options(args, last_arg)

        if Tabry::Util.debug?
          require "json"
          $stderr.puts
          warn "debug: got command line and comp_point: #{cmd_line.inspect}, #{comp_point}"
          warn "using args: #{args.inspect}"
          warn "using lastarg: #{last_arg.inspect}"
          warn "results from Tabry#options(): #{opts.inspect}"
          warn "--- end debug output ---"
        end

        normal_opts = opts.select { |t| t.is_a?(String) }
        special_opts = opts.select { |t| t.is_a?(Symbol) }

        puts normal_opts.map { |t| Shellwords.escape(t) }.join("\n")
        if special_opts.any?
          puts
          puts special_opts.join("\n")
        end
      end
    end
  end
end
