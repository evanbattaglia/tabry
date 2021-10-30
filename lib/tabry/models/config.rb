require_relative 'config_object'
require_relative 'subs'
require_relative 'option_includes'

module Tabry
  module Models
    class Config < ConfigObject
      FIELDS = {
        subs: [:object, :Subs],
        option_includes: [:object, :OptionIncludes]
      }
    end
  end
end
