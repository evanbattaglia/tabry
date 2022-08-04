module Tabry
  module CLI
    Internals = Struct.new(
      :runner, :config_name, :config, :raw_args, :state, :met, :result,
      keyword_init: true
    )
  end
end

