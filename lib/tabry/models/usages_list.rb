require_relative 'config_list'
require_relative 'usage'

module Tabry
  module Models
    # TODO not sure this should use ConfigList which uses flatten now
    class UsagesList < ConfigList
      def initialize(**args)
        super(**args, klass: Usage)
      end
    end
  end
end
