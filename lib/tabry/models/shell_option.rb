# frozen_string_literal: true

require_relative "option_base"

module Tabry
  module Models
    class ShellOption < OptionBase
      def options(token)
        `#{value}`.chomp.split("\n").select { |opt| opt.start_with?(token) }
      end
    end
  end
end
