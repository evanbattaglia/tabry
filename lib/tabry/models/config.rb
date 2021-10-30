require_relative 'config_object'
require_relative 'sub'
require_relative 'option_includes'

module Tabry
  module Models
    class Config < ConfigObject
      FIELDS = {
        main: [:object, :Sub],
        option_includes: [:object, :OptionIncludes]
      }
    end
  end
end
