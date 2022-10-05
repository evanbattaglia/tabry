# frozen_string_literal: true

require_relative "base"
require_relative "builder"
require_relative "../config_builder"

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
          instance_variable_set(:@tabry_all_in_one_config, conf)

          # Hack to avoid processing block any more if only running completion
          # That way you an have expensive requires after the include
          if (ARGV.first == "completion") && ARGV.length == 3 && ARGV[2].to_s =~ /^[0-9]+$/
            throw :run_completion, true
          end
        end
      end

      def self.completion_only(cmd_name, &cmd_conf_blk)
        cmd_conf = Tabry::ConfigBuilder.build(&cmd_conf_blk)

        completer_cli = Class.new(AllInOneBase)

        run_completion = catch(:run_completion) do
          completer_cli.module_eval do
            config do
              completion
              cmd cmd_name
            end

            define_method(:completion__bash) do
              require_relative "../shells/bash"
              puts Tabry::Shells::Bash.generate_self(cmd_name: cmd_name)
            end
          end

          false
        end

        if run_completion
          require_relative "../shells/bash/wrapper"
          Tabry::Bash::Wrapper.run(ARGV[1], ARGV[2], config: cmd_conf)
        else
          completer_conf = completer_cli.instance_variable_get(:@tabry_all_in_one_config)
          Tabry::CLI::Builder.new(completer_conf, completer_cli).run(ARGV)
        end
      end

      # Instead of passing in config, you can also run `config` with a block or a config option
      # in inside blk. This triggers the "run completion fast" (see config method)
      def self.build(cli: nil, config: nil, &blk)
        cli ||= Class.new(AllInOneBase)
        run_completion = catch(:run_completion) do
          cli.module_eval(&blk) if blk
          nil
        end

        config ||= cli.instance_variable_get(:@tabry_all_in_one_config)

        if run_completion
          require_relative "../shells/bash/wrapper"
          Tabry::Bash::Wrapper.run(ARGV[1], ARGV[2], config: config)
        end

        # Add completion methods if not already defined by caller in the block
        if config.main.subs.by_name["completion"] && !cli.instance_methods.include?(:completion__bash)
          completion_mixin = Module.new do
            def completion__bash
              require_relative "../shells/bash"
              puts Tabry::Shells::Bash.generate_self
            end

            def completion
              require_relative "../shells/bash/wrapper"
              config = self.class.instance_variable_get(:@tabry_all_in_one_config)
              Tabry::Bash::Wrapper.run(args.cmd_line, args.comp_point, config: config)
            end
          end
          cli.include completion_mixin
          cli.instance_variable_set :@tabry_all_in_one_config, config
        end

        Tabry::CLI::Builder.new(config, cli)
      end

      def self.run(**kwargs, &blk)
        build(**kwargs, &blk).run(ARGV)
      end
    end
  end
end
