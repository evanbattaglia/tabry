# frozen_string_literal: true

require_relative "../../../lib/tabry/cli/all_in_one"
require_relative "../../../lib/tabry/shells/bash"
require_relative "../../../lib/tabry/shells/bash/wrapper"

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
    allow(Kernel).to receive(:exit).and_raise(StandardError.new("exit called"))
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
      expect_any_instance_of(Kernel).to receive(:puts).with("bash completion stuff")
      cli.run(["completion", "bash"])
    end

    it "creates a #completion method which generates options" do
      expect(Tabry::Bash::Wrapper).to receive(:run).with("cmd line", "6", config: instance_of(Tabry::Models::Config))
      cli.run(["completion", "cmd line", "6"])
    end

    it "quits the block early after loading config and the subcommand to be run is #complete" do
      allow(Tabry::Bash::Wrapper).to receive(:run)
      expect(Tabry::Spec::Cli::AllInOneSpec.log).to eq([])
    end

    it "can take a config object passed in to config" do
      conf = Tabry::ConfigBuilder.build { sub :bar }
      cli = described_class.build do
        config conf

        def bar; end
      end

      expect(cli.runner.config).to eq(conf)
    end
  end

  describe "#run" do
    it "runs build and then runs the builder with ARGV" do
      stub_const("ARGV", ["abc", "def"])
      test_blk = proc { completion }
      test_builder = instance_double(Tabry::CLI::Builder)
      expect(described_class).to receive(:build) do |**kwargs, &blk|
        expect(blk).to eql(test_blk)
        expect(kwargs).to eq({ cli: "fake cli", config: "fake config" })
        test_builder
      end
      expect(test_builder).to receive(:run).with(%w[abc def])
      described_class.run(cli: "fake cli", config: "fake config", &test_blk)
    end
  end

  describe "#completion_only" do
    it "creates a #completion__bash method which generates completion" do
      stub_const("ARGV", %w[completion bash])
      expect(Tabry::Shells::Bash).to receive(:generate_self).with(cmd_name: 'foo').and_return("bash completion stuff")
      expect_any_instance_of(Kernel).to receive(:puts).with("bash completion stuff")

      described_class.completion_only do
        cmd :foo
        sub :bar
      end
    end

    it "creates a #completion method which generates options" do
      stub_const("ARGV", ["completion", "cmd line", "6"])
      expect(Tabry::Bash::Wrapper).to receive(:run) do |cmd_line, comp_point, config:|
        expect(cmd_line).to eq("cmd line")
        expect(comp_point).to eq("6")
        expect(config.cmd).to eq('foo')
        expect(config.main.subs.by_name.keys).to eq(['bar'])
      end
      described_class.completion_only do
        cmd :foo
        sub :bar
      end
    end
  end
end
