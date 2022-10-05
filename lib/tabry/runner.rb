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

    # TODO: rename config_name -> config
    def initialize(config_name:)
      @config = if config_name.is_a?(Tabry::Models::Config)
                  config_name
                else
                  ConfigLoader.load(name: config_name)
                end
    end

    def options(args, last = nil)
      Tabry::OptionsFinder.options(parse(args), last)
    end

    def parse(args)
      state = Tabry::Machine.run(config, args)
      Tabry::Result.new(config, state)
    end
  end
end
