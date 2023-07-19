# frozen_string_literal: true

require "shellwords"
require "yaml"
require_relative "../../util"
require_relative "../../runner"
require_relative "../../shell_tokenizer"

# Fish-specific entrypoint
module Tabry
  module Fish
    module Wrapper
      DESCRIPTION_MAX_LENGTH = 50

      def self.run(cmd_line, comp_point, config: nil)
        cmd_name, args, last_arg = Tabry::ShellTokenizer.split_with_comppoint(cmd_line, comp_point)
        opts = Tabry::Runner.new(config: config || cmd_name).options(args, last_arg, {descriptions: true})

        if Tabry::Util.debug?
          $stderr.puts
          warn "debug: got command line and comp_point: #{cmd_line.inspect}, #{comp_point}"
          warn "using args: #{args.inspect}"
          warn "using lastarg: #{last_arg.inspect}"
          warn "results from Tabry#options(): #{opts.inspect}"
          warn "--- end debug output ---"
        end

        normal_opts = opts.select { |t,| t.is_a?(String) }
        special_opts = opts.select { |t| t.is_a?(Symbol) }

        puts normal_opts.map { |opt, desc| "#{Shellwords.escape(opt)}\t#{format_description(desc)}" }.join("\n")
        if special_opts.any?
          puts
          puts special_opts.join("\n")
        end
      end

      def self.format_description(description)
        if description.nil?
          ""
        else
          if description.length > DESCRIPTION_MAX_LENGTH
            "#{description[0..(DESCRIPTION_MAX_LENGTH - 3)]}..."
          else
            description
          end
        end
      end
    end
  end
end
