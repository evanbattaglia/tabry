require_relative 'config_list'
require_relative 'flag'

module Tabry
  module Models
    class FlagsList < ConfigList
      def initialize(arr)
        super(arr, Flag)
      end
    end
  end
end
