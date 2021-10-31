require_relative 'config_list'
require_relative 'sub'

module Tabry
  module Models
    class SubsList < ConfigList
      def initialize(**args)
        super(**args, klass: Sub)
      end

      def by_name
        # TODO -- includes
        @by_name ||= to_a.map{|sub| [sub.name, sub]}.to_h
      end

      def flatten
        @flatten ||= to_a.map(&:flatten).flatten
      end

      def match(token)
        # TODO -- includes
        flatten.find{|sub| sub.name == token}
      end

      def options(token)
        # TODO -- includes
        flatten.map(&:name).select{|name| name.start_with?(token)}
      end
    end
  end
end
