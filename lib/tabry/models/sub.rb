require_relative 'args_list'
require_relative 'flags_list'
require_relative 'usages_list'
require_relative 'final_args'
require_relative 'subs'

module Tabry
  module Models
    class Sub < ConfigObject
      FIELDS = {
        aliases: :string_array,
        args: [:list_object, :ArgsList],
        flags: [:list_object, :FlagsList],
        usages: [:list_object, :UsagesList],
        description: :string,
        final_args: [:object, :FinalArgs],
        subs: [:object, :Subs],
      }
    end
  end
end
