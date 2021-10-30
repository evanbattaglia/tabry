require_relative 'const_option'
require_relative 'shell_option'
require_relative 'include_option'

module Tabry
  module Models
    module Option
      def self.new(hash)
        # TODO assert type
        case hash['type']
        when 'constant'
          ConstOption.new(hash)
        when 'shell'
          ShellOption.new(hash)
        when 'include'
          IncludeOption.new(hash)
        when 'file'
          FileOption.new(hash)
        when 'directory'
          DirectoryOption.new(hash)
        else
          raise "unknown option type #{hash['type']}"
        end
      end
    end
  end
end
