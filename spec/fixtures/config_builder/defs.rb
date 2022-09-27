# frozen_string_literal: true

module Tabry
  module Spec
    module Fixtures
      module ConfigBuilder
        Defs = Tabry::ConfigBuilder.build do
          cmd :defstest

          defopts :@bar do
            opts const :def
          end

          defopts :@environment do
            opts const %w[prod beta dev]
          end

          defargs :@verbose do
            flag :verbose, "Show more info"
          end

          defargs "@project-and-environment" do
            arg :project, "The project" do
              opts const %w[project1 project2]
            end

            arg :environment, "The environment", :@environment
          end
        end
      end
    end
  end
end
