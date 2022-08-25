# frozen_string_literal: true

require_relative "config_object"
require_relative "options_list"
require_relative "include_flag"

module Tabry
  module Models
    class Flag < ConfigObject
      def self.new(**args)
        if args[:raw]["include"]
          IncludeFlag.new(**args)
        else
          super(**args)
        end
      end

      FIELDS = {
        aliases: :string_array,
        description: :string,
        name: :string, # TODO: required
        required: :boolean,
        arg: :boolean,
        options: [:list_object, :OptionsList]
      }.freeze

      def flatten
        self
      end

      def match_with_value(token)
        [name, *aliases].each do |al|
          if al.length > 1 && token.start_with?("--#{al}=")
            return token.sub("--#{al}=", "")
          end
        end
        nil
      end

      def match(token)
        [name, *aliases].any? { |al| token == alias_with_dash(al) }
      end

      def name_with_dashes
        @name_with_dashes ||= alias_with_dash(name)
      end

      def alias_with_dash(al)
        (al.length == 1) ? "-#{al}" : "--#{al}"
      end

      attr_reader(*FIELDS.keys)
    end
  end
end
