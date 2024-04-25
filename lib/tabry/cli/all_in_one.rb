# frozen_string_literal: true

require_relative "base"
require_relative "builder"
require_relative "../config_builder"

# Define a Tabry Config + CLI in one call to build or run. The block passed in should define
# your CLI methods and include a call to `config` with a tabry config or block that defines
# one (passed on to Tabry::ConfigBuilder)
module Tabry
  module CLI
    module AllInOne
      class AllInOneBase < Base
        def self.config(opts = {}, &blk)
          require_relative "../models/config"
          if opts.is_a?(Tabry::Models::Config)
            conf = opts
          else
            require_relative "../config_builder"
            conf = Tabry::ConfigBuilder.build(**opts, &blk)
          end

          # Set it in the CLI class itself so AllInOne.build can find it
          instance_variable_set(:@tabry_all_in_one_config, conf)

          # Hack to avoid processing block any more if only running completion
          # That way you an have expensive requires after the include
          if ((ARGV.first == "completion")) && ARGV.length == 3 && ARGV[2].to_s =~ /^[0-9]+$/
            throw :run_completion, true
          end
        end
      end

      # Creates and runs a CLI whose only purpose is to create a completion
      # wrapper for another program
      def self.completion_only(completion_conf = nil, **opts, &cmd_conf_blk)
        completion_conf ||= Tabry::ConfigBuilder.build(**opts, &cmd_conf_blk)
        cmd_name = completion_conf.cmd or raise "cmd is mandatory for completion_only configs"

        cli_class = Class.new(Tabry::CLI::Base)
        cli_conf = Tabry::ConfigBuilder.build { completion }
        define_completion_methods(cli_class, completion_conf, cmd_name: cmd_name)
        Tabry::CLI::Builder.new(cli_conf, cli_class).run(ARGV)
      end

      def self.define_completion_methods(cli_class, config, cmd_name: nil)
        cli_class.module_eval do
          define_method :completion__json do
            require "json"
            # Result is flattened/includes squashed (ConfigList#to_a I think calls flatten), so remove the includes
            puts config.as_json.except(:arg_includes, :option_includes).to_json
          end

          define_method :completion__bash do
            require_relative "../shells/bash"
            Kernel.puts Tabry::Shells::Bash.generate_self(cmd_name: cmd_name)
          end

          define_method :completion__fish do
            require_relative "../shells/fish"
            Kernel.puts Tabry::Shells::Fish.generate_self(cmd_name: cmd_name)
          end

          define_method :completion do
            fish_mode = ENV.fetch("TABRY_FISH_MODE", false)
            if fish_mode
              require_relative "../shells/fish/wrapper"
              Tabry::Fish::Wrapper.run(args.cmd_line, args.comp_point, config: config)
            else
              require_relative "../shells/bash/wrapper"
              Tabry::Bash::Wrapper.run(args.cmd_line, args.comp_point, config: config)
            end
          end
        end
      end

      # Instead of passing in config, you can also run `config` with a block or a config option
      # in inside blk. Doing this will also enable the "run completion fast" (see config method)
      def self.build(cli: nil, config: nil, &blk)
        # def self.build(cli: nil, config: nil, &blk)
        cli ||= Class.new(AllInOneBase)

        # If block given. run it to define the CLI methods and/or setting the config
        # with a call to AllInOneBase.config
        if blk
          run_completion = catch(:run_completion) do
            cli.module_eval(&blk)
            nil
          end
        end

        config ||= cli.instance_variable_get(:@tabry_all_in_one_config)

        # If we recognize command is going to be a completion command, fast track and
        # run completion now
        if run_completion && (ARGV.first == "completion")
          fish_mode = ENV.fetch("TABRY_FISH_MODE", false)
          if fish_mode
            require_relative "../shells/fish/wrapper"
            Tabry::Fish::Wrapper.run(ARGV[1], ARGV[2], config: config)
          else
            require_relative "../shells/bash/wrapper"
            Tabry::Bash::Wrapper.run(ARGV[1], ARGV[2], config: config)
          end
          exit
        end

        # If we recognize there is a "completion" subcommand, add completion
        # methods -- if not already defined by caller in the block
        if config.main.subs.by_name["completion"] && !cli.instance_methods.include?(:completion__bash) && !cli.instance_methods.include?(:completion__fish)
          define_completion_methods(cli, config)
        end

        Tabry::CLI::Builder.new(config, cli)
      end

      def self.run(...)
        build(...).run(ARGV)
      end
    end
  end
end
