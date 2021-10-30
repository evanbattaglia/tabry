require_relative 'config_object'
require_relative 'args_list'
require_relative 'flags_list'
require_relative 'final_args'

# Note: shares many traits with subs
module Tabry
  module Models
    class Usage < ConfigObject
      FIELDS = {
        args: [:list_object, :ArgsList],
        flags: [:list_object, :FlagsList],
        description: :string,
        final_args: [:object, :FinalArgs],
      }
    end
  end
end

