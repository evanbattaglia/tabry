module Tabry
  State = Struct.new(
    :mode,
    :subcommand_stack,
    :args,
    :usage,
    :flags,
    :current_flag,
    :dashdash,
    keyword_init: true
  )
end
