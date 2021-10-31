require_relative 'const_option'
require_relative 'shell_option'
require_relative 'include_option'
require_relative 'file_option'
require_relative 'dir_option'

module Tabry
  module Models
    module Option
      def self.new(hash)
        # TODO assert type
        case hash['type']
        when 'const'
          ConstOption.new(hash)
        when 'shell'
          ShellOption.new(hash)
        when 'include'
          IncludeOption.new(hash)
        when 'file'
          FileOption.new(hash)
        when 'dir'
          DirOption.new(hash)
        else
          raise "unknown option type #{hash['type']}"
        end
      end
    end
  end
end
