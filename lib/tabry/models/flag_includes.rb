require_relative 'config_string_hash'
require_relative 'flags_list'

module Tabry
  module Models
    class FlagIncludes < ConfigStringHash
      def initialize(hash)
        super(hash, FlagsList)
      end
    end
  end
end
