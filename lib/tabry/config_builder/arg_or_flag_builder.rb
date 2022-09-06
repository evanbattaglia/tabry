# frozen_string_literal: true

require_relative "generic_builder"

module Tabry
  module ConfigBuilder
    class ArgOrFlagBuilder < GenericBuilder
      init_setters :name, :description, split_name_to_aliases: true
      simple_setter :desc, :description
      simple_setter :title

      def _include(inc)
        _append :options, { "type" => "include", "value" => inc }
      end

      def opts(opt_hashes)
        _append :options, *opt_hashes
      end

      def shell(cmd)
        [{ "type" => "shell", "value" => cmd.to_s }]
      end

      # maybe I should rename this ... and include... ?
      def method(met_name)
        [{ "type" => "method", "value" => met_name.to_s }]
      end

      def file
        [{ "type" => "file" }]
      end

      def dir
        [{ "type" => "dir" }]
      end

      def const(opts)
        [opts].flatten.map do |opt|
          [{ "type" => "const", "value" => opt.to_s }]
        end
      end
    end
  end
end
