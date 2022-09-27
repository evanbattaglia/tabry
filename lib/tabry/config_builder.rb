require_relative 'config_builder/top_level_builder'
require_relative 'models/config'

module Tabry
  module ConfigBuilder
    def self.build(*args, &blk)
      conf = TopLevelBuilder.build(*args, &blk)
      top_level = %w[cmd arg_includes option_includes]
      conf = conf.slice(*top_level).merge('main' => conf.except(*top_level))
      Tabry::Models::Config.new(raw: conf)
    end
  end
end
