require 'tabry/cli/util/config'

module Mycli
  module Config
    module_function
    def config
      @config ||= Tabry::CLI::Util::Config.new(
        ENV['MYCLI_CONFIG_FILE'] || '~/.mycli.yml'
      ).config
    end
  end
end
