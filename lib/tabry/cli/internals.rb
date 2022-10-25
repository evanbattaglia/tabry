# frozen_string_literal: true

module Tabry
  module CLI
    Internals = Struct.new(
      :runner, :raw_args, :state, :met, :result,
      keyword_init: true
    )
  end
end
