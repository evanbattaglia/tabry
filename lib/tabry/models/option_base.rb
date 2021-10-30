require_relative 'config_object'

module Tabry
  module Models
    class OptionBase < ConfigObject
      FIELDS = {
        type: :string,
        value: :string,
      }
    end
  end
end
