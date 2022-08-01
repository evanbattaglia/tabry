require 'tabry/cli/base'
require 'tabry/cli/util'
require_relative 'config'

module Mycli
  class CLI < Tabry::CLI::Base
    def things__list
      %w[foo bar waz].each do |thing|
        puts thing
      end
    end

    def things__add
      puts "config: #{Config.config.some_config}"
      puts "adding #{args.thing_name}"
    end

    def things__delete
      puts "deleting #{args.thing_name}"
    end
  end
end
