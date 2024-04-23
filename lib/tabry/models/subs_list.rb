# frozen_string_literal: true

require_relative "config_list"
require_relative "sub"

module Tabry
  module Models
    class SubsList < ConfigList
      def initialize(**args)
        super(**args, klass: Sub)
      end

      def by_name
        @by_name ||= to_a.to_h { |sub| [sub.name, sub] }
      end

      def match(token)
        to_a.find do |sub|
          [sub.name, *sub.aliases].include?(token)
        end
      end

      def options(token, params)
        ::Tabry::Util.debug "checking:::: #{token}"
        to_a
          .select { |sub| sub.name.start_with?(token) }
          .map do |sub|
            if params[:descriptions]
              [sub.name, sub.description]
            else
              sub.name
            end
          end
          .compact
      end
    end
  end
end
