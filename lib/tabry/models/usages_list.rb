require_relative 'config_list'
require_relative 'usage'

module Tabry
  module Models
    class UsagesList < ConfigList
      def initialize(arr)
        super(arr, Usage)
      end
    end
  end
end
