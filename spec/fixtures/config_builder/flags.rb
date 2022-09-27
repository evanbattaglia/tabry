# frozen_string_literal: true

module Tabry
  module Spec
    module Fixtures
      module ConfigBuilder
        Flags = Tabry::ConfigBuilder.build do
          cmd :flagstest

          flag :foo1
          flag :foo2, "Some desc"
          flag "dry-run2,r", "Don't act, only show what would be done"

          flagarg "foo3"
          flagarg :b do
            opts const :a
          end

          flagarg "f,format" do
            opts const %w[json yml]
          end
        end
      end
    end
  end
end
