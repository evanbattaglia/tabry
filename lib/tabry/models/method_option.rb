# frozen_string_literal: true

require_relative "option_base"

module Tabry
  module Models
    class MethodOption < OptionBase
      # TODO: Handled upstream for now, could change later.
      def options(_token)
        [value.to_sym]
      end
    end
  end
end
