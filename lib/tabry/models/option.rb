require_relative 'const_option'
require_relative 'shell_option'
require_relative 'include_option'
require_relative 'file_option'
require_relative 'dir_option'

module Tabry
  module Models
    module Option
      def self.new(**args)
        # TODO assert type
        hash = args[:raw]
        case hash['type']
        when 'const'
          ConstOption.new(**args)
        when 'shell'
          ShellOption.new(**args)
        when 'include'
          IncludeOption.new(**args)
        when 'file'
          FileOption.new(**args)
        when 'dir'
          DirOption.new(**args)
        else
          raise "unknown option type #{hash['type']}"
        end
      end
    end
  end
end
