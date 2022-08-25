# frozen_string_literal: true

require_relative "option_base"

module Tabry
  module Models
    class ConstOption < OptionBase
      def options(token)
        if value.start_with?(token)
          [value]
        else
          []
        end
      end
    end
  end
end
