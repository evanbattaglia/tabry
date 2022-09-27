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
        end
      end

      def self.run(cli: nil, config: nil, &blk)
        cli ||= Class.new(AllInOneBase)
        cli.module_eval(&blk) if blk
        config ||= cli.instance_variable_get(:@tabry_all_in_one_config)

        if config.main.subs.by_name['completion']
          require_relative '../shells/bash'
          require_relative '../shells/bash/wrapper'
          completion_mixin = Module.new do
            def completion__bash
              puts Tabry::Shells::Bash.generate_self
            end

            def completion
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
