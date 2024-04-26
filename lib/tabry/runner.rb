# frozen_string_literal: true

require_relative "config_loader"
require_relative "machine"
require_relative "options_finder"
require_relative "result"

# Loads a config, runs the machine, creates a Result object to encapsulate results.
# Also options() convenience function
module Tabry
  class Runner
    attr_reader :config

    def initialize(config:)
      @config = if config.is_a?(Tabry::Models::Config)
                  config
                else
                  ConfigLoader.load(name: config)

                end
    end

    def options(args, last = nil, params = {})
      options_finder(args, params).options(last)
    end

    def options_finder(args, params = {})
      Tabry::OptionsFinder.new(parse(args), params)
    end

    def parse(args)
      state = Tabry::Machine.run(config, args)
      Tabry::Result.new(config, state)
    end
  end
end
