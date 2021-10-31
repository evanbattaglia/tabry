require_relative 'models/config'

module Tabry
  class ConfigLoader
    class ConfigNotFound < StandardError; end

    def self.load(**args)
      new(**args).load
    end

    attr_reader :name

    def initialize(name:)
      @name = name
    end

    def load
      return load_from_file(name) if name =~ /\.json$/i || name =~ /\.ya?ml$/i

      load_paths.each do |dir|
        filename = "#{dir}/#{name}.json"
        return load_from_file(filename) if File.exists?(filename)
        filename = "#{dir}/#{name}.yml"
        return load_from_file(filename) if File.exists?(filename)
      end

      raise ConfigNotFound, "Could not find Tabry config #{name.inspect} in paths: #{load_paths.inspect}"
    end

    private
    def load_paths
      @load_paths ||= [
        *ENV['TABRY_IMPORTS_PATH']&.split(':')&.reject(&:empty?),
        ENV['HOME'] + "/.tabry/",
      ]
    end

    def load_from_file(filename)
      if filename =~ /\.json$/
        require 'json'
        Tabry::Models::Config.new(JSON.parse(File.read(filename)))
      elsif filename =~ /\.yml$/
        require 'yaml'
        Tabry::Models::Config.new(YAML.load(File.read(filename)))
      else
        raise 'unknown file type'
      end
    end
  end
end
