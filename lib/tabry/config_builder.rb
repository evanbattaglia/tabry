# frozen_string_literal: true

require_relative "config_builder/top_level_builder"
require_relative "models/config"

module Tabry
  module ConfigBuilder
    def self.build(names_underscores_to_dashes: false, &blk)
      opts = { names_underscores_to_dashes: names_underscores_to_dashes }
      conf = TopLevelBuilder.build(opts, &blk)
      top_level = %w[cmd arg_includes option_includes]
      conf = conf.slice(*top_level).merge("main" => conf.except(*top_level))
      Tabry::Models::Config.new(raw: conf)
    end
  end
end
