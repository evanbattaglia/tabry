require_relative 'config_string_hash'
require_relative 'sub'

module Tabry
  module Models
    class Subs < ConfigStringHash
      def initialize(hash)
        super(hash, Sub)
      end
    end
  end
end
