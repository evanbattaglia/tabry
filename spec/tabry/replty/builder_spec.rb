# frozen_string_literal: true

require_relative "../../../lib/tabry/replty/builder"
require_relative "../../../lib/tabry/replty/base"
require_relative "../../../lib/tabry/config_builder"

module Tabry
  module Specs
    class TestRepl < Tabry::Replty::Base
      def log
        @log ||= []
      end

      def foo
        log << [:foo]
      end

      def bar
        log << [:bar, args.waz, flags.ok]
      end
    end
  end
end

describe Tabry::Replty::Builder do
  it "calls the repl method for the subcommand" do
    conf = Tabry::ConfigBuilder.build do |_c|
      sub :foo
      sub :bar do
        arg :waz
        flag :ok
      end
    end

    repl = Tabry::Specs::TestRepl.new
    builder = Tabry::Replty::Builder.new(conf, repl)
    expect(builder).to receive(:readline).and_return("bar waz --ok")
    expect(builder).to receive(:readline).and_return(nil)
    builder.run
  end
end
