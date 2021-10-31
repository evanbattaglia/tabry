require_relative 'config_list'
require_relative 'flag'

module Tabry
  module Models
    class FlagsList < ConfigList
      def initialize(**args)
        super(**args, klass: Flag)
      end

      def options(token, used_flags_hash)
        to_a.map do |flag|
          if used_flags_hash[flag.name]
            nil
          elsif token.nil? || flag.name_with_dashes.start_with?(token)
            # TODO hidden until '-'
            flag.name_with_dashes
          end
        end.compact
      end

      def match(token)
        to_a.each do |flag|
          if (arg_value = flag.match_with_value(token))
            return flag, arg_value
          elsif flag.match(token)
            return flag
          end
        end
        false
      end

      def [](flag_name)
        if flag_name.is_a?(Integer)
          to_a[flag_name]
        else
          to_a.find{|f| f.name == flag_name}
        end
      end
    end
  end
end
