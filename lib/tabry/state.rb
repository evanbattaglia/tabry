# frozen_string_literal: true

module Tabry
  State = Struct.new(
    :mode,
    :subcommand_stack,
    :args,
    :flags,
    :current_flag,
    :dashdash,
    :help,
    keyword_init: true
  )
end
