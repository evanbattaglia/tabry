require_relative 'arg'
require_relative 'args_list'

module Tabry
  module Models
    class ArgsList < ConfigList
      def initialize(**args)
        super(**args, klass: Arg)
      end
    end
  end
end
