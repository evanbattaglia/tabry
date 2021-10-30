require_relative 'config_loader'
require_relative 'machine'

module Tabry
  class Runner
    attr_reader :config, :machine
    def initialize(config_name:)
      @config = ConfigLoader.load(name: config_name)
    end

    def options(args, last=nil)
      machine = Tabry::Machine.new(config)
      machine.run(args)
      machine.options(last)
    end

    def parse(args)
      machine = Tabry::Machine.new(config)
      machine.run(args)
      machine.state
    end
  end
end

