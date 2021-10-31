require_relative 'config_string_hash'
require_relative 'options_list'

module Tabry
  module Models
    class OptionIncludes < ConfigStringHash
      def initialize(**args)
        super(**args, klass: OptionsList)
      end
    end
  end
end
