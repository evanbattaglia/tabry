# frozen_string_literal: true

module Tabry
  module Spec
    module Fixtures
      module ConfigBuilder
        Underscoresdashes = Tabry::ConfigBuilder.build(names_underscores_to_dashes: true) do
          # this is not translated, because that actually affects things
          cmd :underscores_test

          arg :foo_bar1, :@project_and_environment

          flagarg :foo_bar2, :@project_and_environment do
            include "@waz_abc"
          end

          sub "s,status_foo", "foo", :@project_and_environment do
            flagarg :env, :@environment
          end

          include :@project_and_environment

          defopts :@project_and_environment do
            opts const :a
          end
        end
      end
    end
  end
end
