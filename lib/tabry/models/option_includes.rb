require_relative 'config_string_hash'
require_relative 'option_include'

module Tabry
  module Models
    class OptionIncludes < ConfigStringHash
      def initialize(hash)
        super(hash, OptionInclude)
      end
    end
  end
end
