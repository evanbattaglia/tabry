require_relative 'config_string_hash'
require_relative 'args_list'

module Tabry
  module Models
    class ArgIncludes < ConfigStringHash
      def initialize(**args)
        super(**args, klass: ArgsList)
      end
    end
  end
end
