require_relative 'config_object'
require_relative 'args_list'
require_relative 'flags_list'

# Note: shares many traits with subs
module Tabry
  module Models
    class Usage < ConfigObject
      FIELDS = {
        args: [:list_object, :ArgsList],
        flags: [:list_object, :FlagsList],
        description: :string,
      }

      attr_reader *FIELDS.keys
    end
  end
end

