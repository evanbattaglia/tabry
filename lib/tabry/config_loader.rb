# frozen_string_literal: true

require_relative "models/config"

module Tabry
  class ConfigLoader
    class ConfigNotFound < StandardError; end

    EXTENSIONS = %w[json yml yaml].freeze

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
        EXTENSIONS.each do |extension|
          filename = "#{dir}/#{name}.#{extension}"
          return load_from_file(filename) if File.exist?(filename)
        end
      end

      raise ConfigNotFound, "Could not find Tabry config #{name}.(#{EXTENSIONS.join(", ")}) in paths: #{load_paths.inspect}"
    end

    private

    def load_paths
      @load_paths ||= [
        *ENV["TABRY_IMPORTS_PATH"]&.split(":")&.reject(&:empty?),
        Dir.home + "/.tabry/",
      ]
    end

    def load_from_file(filename)
      if filename =~ /\.json$/
        require "json"
        Tabry::Models::Config.new(raw: JSON.parse(File.read(filename)))
      elsif filename =~ /\.ya?ml$/
        require "yaml"
        Tabry::Models::Config.new(raw: YAML.safe_load(File.read(filename)))
      else
        raise "unknown file type"
      end
    end
  end
end
