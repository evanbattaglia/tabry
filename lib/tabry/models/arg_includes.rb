# frozen_string_literal: true

require_relative "config_string_hash"
require_relative "arg_include"

module Tabry
  module Models
    class ArgIncludes < ConfigStringHash
      def initialize(**args)
        super(**args, klass: ArgInclude)
      end
    end
  end
end
