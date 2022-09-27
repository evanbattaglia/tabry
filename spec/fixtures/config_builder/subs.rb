# frozen_string_literal: true

module Tabry
  module Spec
    module Fixtures
      module ConfigBuilder
        Subs = Tabry::ConfigBuilder.build do
          cmd :substest

          sub :list, "List the things"
          sub "delete,d", :@verbose do
            desc "Delete a thing"
            arg
          end

          # status command acts and project-and-environment as well
          sub :status, "foo", "@project-and-environment", :@verbose do
            flagarg :env, :@environment
          end

          sub :mysub1 do
            sub :mysub2 do
              flag :someopt
              opt_arg "mysub2-arg"
            end
          end

          # Top-level include
          include "@project-and-environment"
        end
      end
    end
  end
end
