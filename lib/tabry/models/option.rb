# frozen_string_literal: true

require_relative "config_error"
%w[const shell include file dir method].each do |type|
  require_relative "#{type}_option"
end

module Tabry
  module Models
    module Option
      def self.new(**args)
        # TODO: assert type
        hash = args[:raw]
        case hash["type"]
        when "const"
          ConstOption.new(**args)
        when "shell"
          ShellOption.new(**args)
        when "method"
          MethodOption.new(**args)
        when "include"
          IncludeOption.new(**args)
        when "file"
          FileOption.new(**args)
        when "dir"
          DirOption.new(**args)
        else
          raise ConfigError, "unknown option type #{hash["type"]}"
        end
      end
    end
  end
end
