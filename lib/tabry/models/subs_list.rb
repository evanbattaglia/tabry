require_relative 'config_list'
require_relative 'sub'

module Tabry
  module Models
    class SubsList < ConfigList
      def initialize(**args)
        super(**args, klass: Sub)
      end

      def by_name
        @by_name ||= to_a.map{|sub| [sub.name, sub]}.to_h
      end

      def match(token)
        to_a.find{|sub| sub.name == token}
      end

      def options(token)
        to_a.map(&:name).select{|name| name.start_with?(token)}
      end
    end
  end
end
