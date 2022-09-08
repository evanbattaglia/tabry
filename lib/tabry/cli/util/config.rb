# frozen_string_literal: true

require "ostruct"
require "yaml"
require "json"

# Simple YAML configuration
# Example:
# require 'tabry/cli/util/config'
# module MyCli
#   Config = Tabry::CLI::Util::Config.new('~/.mycli.yml')
# end

class Hash
  def to_openstruct
    JSON.parse to_json, object_class: OpenStruct
  end
end

class Array
  def to_openstruct
    JSON.parse to_json, object_class: OpenStruct
  end
end

module Tabry
  module CLI
    module Util
      class Config
        def initialize(path)
          @path = path.gsub(/^~/, Dir.home)
        end

        def self.configs(glob)
          glob = glob.gsub(/^~/, Dir.home)
          Dir[glob].sort.map { |f| new(f) }
        end

        def config
          @config ||= YAML.load_file(@path).to_openstruct
        end

        def method_missing(*args)
          config.send(*args)
        end

        def respond_to_missing?(*args)
          super?(*args) || config.respond_to_missing?(*args)
        end
      end
    end
  end
end
