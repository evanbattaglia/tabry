require_relative 'config_string_hash'
require_relative 'subs_list'

module Tabry
  module Models
    class SubIncludes < ConfigStringHash
      def initialize(hash)
        super(hash, SubsList)
      end
    end
  end
end
