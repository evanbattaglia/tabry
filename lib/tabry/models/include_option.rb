require_relative 'option_base'

module Tabry
  module Models
    class IncludeOption < OptionBase
      def options(token)
        []
        # TODO, need access to config
        # config.option_includes[values].options(token)
      end
    end
  end
end
