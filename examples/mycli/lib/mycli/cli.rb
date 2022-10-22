# frozen_string_literal: true

require "tabry/cli/base"
require "tabry/cli/util"
require_relative "config"

module Mycli
  class CLI < Tabry::CLI::Base
    def things__list
      puts %w[foo bar waz]
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
