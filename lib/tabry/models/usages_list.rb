require_relative 'config_list'
require_relative 'usage'

module Tabry
  module Models
    class UsagesList < ConfigList
      def initialize(**args)
        super(**args, klass: Usage)
      end
    end
  end
end
