# frozen_string_literal: true

module Tabry
  module Spec
    module Fixtures
      module ConfigBuilder
        Args = Tabry::ConfigBuilder.build do
          cmd "argstest"

          arg do
            opts const :a
            opts shell "ls"
            opts const %w[T F true false yes no]
            opts file
            opts dir
          end

          arg :foo
          arg :foo, :@whatever
          arg :foo, "desc", :@whatever do
            opts const :abc
          end

          opt_arg
          opt_arg :foo, :@whatever do
            opts const :abc
          end

          arg do
            include :@foo
            opts const :abc
          end

          opt_varargs "rest-args-optional" do
            opts const %w[foo bar waz]
          end

          arg :thing_to_search_for do
            title "thing to search for"
          end

          varargs :files_to_load do
            title "file to load"
          end
        end
      end
    end
  end
end
