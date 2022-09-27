# frozen_string_literal: true

require_relative "base"
require_relative 'builder'

module Tabry
  module CLI
    module AllInOne
      class AllInOneBase < Base
        def self.config(opts={}, &blk)
          require_relative '../config_builder'
          conf = Tabry::ConfigBuilder.build(**opts, &blk)
          instance_variable_set(:@tabry_all_in_one_config, conf)

          # Hack to avoid processing block any more if only running completion
          # That way you an have expensive requires after the include
          if ARGV.first == "completion" and ARGV.length == 3 && ARGV[2].to_s =~ /^[0-9]+$/
            throw :run_completion, true
          end
        end
      end

      def self.run(cli: nil, config: nil, &blk)
        cli ||= Class.new(AllInOneBase)
        run_completion = catch(:run_completion) do
          cli.module_eval(&blk) if blk
          nil
        end

        config ||= cli.instance_variable_get(:@tabry_all_in_one_config)

        if run_completion
          require_relative '../shells/bash/wrapper'
          Tabry::Bash::Wrapper.run(ARGV[1], ARGV[2], config: config)
        end

        if config.main.subs.by_name['completion']
          completion_mixin = Module.new do
            def completion__bash
              require_relative '../shells/bash'
              puts Tabry::Shells::Bash.generate_self
            end

            def completion
              require_relative '../shells/bash/wrapper'
              config = self.class.instance_variable_get(:@tabry_all_in_one_config)
              Tabry::Bash::Wrapper.run(args.cmd_line, args.comp_point, config: config)
            end
          end
          cli.include completion_mixin
          cli.instance_variable_set :@tabry_all_in_one_config, config
        end

        Tabry::CLI::Builder.new(config, cli).run(ARGV)
      end
    end
  end
end
