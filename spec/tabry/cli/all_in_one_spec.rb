# frozen_string_literal: true

require_relative "../../../lib/tabry/cli/all_in_one"
require_relative "../../../lib/tabry/shells/bash"

describe Tabry::CLI::AllInOne do
  module Tabry::Spec
    module Cli
      module AllInOneSpec
        class << self
          attr_accessor :log
        end
      end
    end
  end

  before do
    Tabry::Spec::Cli::AllInOneSpec.log = []
  end

  describe ".build" do
    let(:cli) do
      described_class.build do
        config do
          completion

          cmd :abc

          sub :foo do
            arg :bar
          end

          sub :foo2 do
            sub :bar2
          end
        end

        Tabry::Spec::Cli::AllInOneSpec.log << :after_config

        def foo
          Tabry::Spec::Cli::AllInOneSpec.log << [:foo, args.bar]
        end

        def foo2__bar2
          Tabry::Spec::Cli::AllInOneSpec.log << [:foo2__bar2]
        end
      end
    end

    it "creates a builder with CLI" do
      expect(cli).to be_a(Tabry::CLI::Builder)
      expect(cli.cli_class).to be_a(Class)
      expect(cli.cli_class).to be < Tabry::CLI::Base
    end

    it "makes the config using the config block" do
      conf = cli.runner.config
      expect(conf).to be_a(Tabry::Models::Config)
      expect(conf.main.subs.by_name.keys).to include("foo2")
    end

    it "makes a CLI with the methods in the block" do
      cli.run(["foo", "bararg"])
      expect(Tabry::Spec::Cli::AllInOneSpec.log).to eq [
        :after_config,
        [:foo, "bararg"],
      ]
    end

    it "creates a #completion__bash method which generates completion" do
      expect(Tabry::Shells::Bash).to receive(:generate_self).and_return("bash completion stuff")
      expect_any_instance_of(cli.cli_class).to receive(:puts).with("bash completion stuff")
      cli.run(["completion", "bash"])
    end

    it "creates a #complete method which generates options" do
    end

    it "quits the block early after loading config and the subcommand to be run is #complete" do
    end

    it "can take a config object passed in to config" do
      conf = Tabry::ConfigBuilder.build { sub :bar }
      cli = described_class.build do
        config conf

        def bar
        end
      end

      expect(cli.runner.config).to eq(conf)
    end
  end

  describe "#run" do
    it 'runs build and then runs the builder with ARGV'
  end

  # TODO: can't remember why this is necessary, why we can't just use run() e.g.
  # def completion_only = run { config { completion; yield } }
  describe "#completion_only" do
    it "defines a completion method"
    it "defines a complete__bash method"
  end


end
