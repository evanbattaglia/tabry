require_relative 'config_list'
require_relative 'option'

module Tabry
  module Models
    class OptionsList < ConfigList
      def initialize(arr)
        super(arr, Option)
      end

      def options(token)
        to_a.map{|option| option.options(token)}.inject(&:|)
      end
    end
  end
end


