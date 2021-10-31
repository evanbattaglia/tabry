require_relative 'config_loader'
require_relative 'machine'
require_relative 'options_finder'

# Loads a config, runs the machine, creates a Result object to encapsulate results.
# Also options() convenience function
module Tabry
  class Runner
    attr_reader :config
    def initialize(config_name:)
      @config = ConfigLoader.load(name: config_name)
    end

    def options(args, last=nil)
      Tabry::OptionsFinder.options(parse(args), token)
    end

    def parse(args)
      state = Tabry::Machine.run(config, args)
      Tabry::Result.new(config, state)
    end
  end
end

