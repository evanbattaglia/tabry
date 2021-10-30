require_relative 'config_string_hash'
require_relative 'sub'

module Tabry
  module Models
    class Subs < ConfigStringHash
      def initialize(hash)
        super(hash, Sub)
      end

      def match(token)
        to_h.keys.find{|name| name == token}
      end

      def options(token)
        to_h.keys.select{|name| name.start_with?(token)}
      end
    end
  end
end
