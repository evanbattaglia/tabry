require_relative 'config_list'
require_relative 'option'

module Tabry
  module Models
    class OptionsList < ConfigList
      def initialize(arr)
        super(arr, Option)
      end
    end
  end
end


