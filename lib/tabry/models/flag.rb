require_relative 'config_object'
require_relative 'options_list'

module Tabry
  module Models
    class Flag < ConfigObject
      FIELDS = {
        aliases: :string_array,
        description: :string,
        name: :string, # TODO required
        required: :boolean,
        arg: :boolean,
        options: [:list_object, :OptionsList]
      }
    end
  end
end

