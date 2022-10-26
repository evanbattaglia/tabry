# frozen_string_literal: true

require_relative "../../../lib/tabry/cli/builder"
require_relative "../../../lib/tabry/cli/base"

# probably test base & builder together in this file. and runner

class Tabry::CLI::Builder
  class TestCliFooBar < Tabry::CLI::Base
    class << self
      attr_accessor :actions_run, :cli_object
    end

    before_action :my_before_action

    def main
      self.class.actions_run << :main
    end

    def waz
      self.class.actions_run << :waz
    end

    def my_before_action
      self.class.actions_run << :before_action
      self.class.cli_object = self
    end
  end

  class TestCliFoo < Tabry::CLI::Base
    sub_route :bar, to: TestCliFooBar
  end

  class TestCli2 < Tabry::CLI::Base
    class << self
      attr_accessor :actions_run, :cli_object
    end

    after_action :my_after_action, except: :build2

    def build2
      self.class.actions_run << :build2
    end

    def sub__sub_sub
      self.class.actions_run << :sub__sub_sub
    end

    def my_before_action
      self.class.actions_run << :before_action
      self.class.cli_object = self
    end

    def my_after_action
      self.class.actions_run << :after_action
      self.class.cli_object = self
    end
  end

  class TestCli < Tabry::CLI::Base
    class << self
      attr_accessor :actions_run, :cli_object
    end

    before_action :my_before_action, only: :build
    after_action :my_after_action

    sub_route :foo, to: TestCliFoo
    sub_route :sub, :build2, to: TestCli2, full_method_name: true

    def main
      self.class.actions_run << :main
    end

    def build
      self.class.actions_run << :build
    end

    def my_action
      self.class.actions_run << :my_action
    end

    def my_before_action
      self.class.actions_run << :before_action
      self.class.cli_object = self
    end

    def my_after_action
      self.class.actions_run << :after_action
      self.class.cli_object = self
    end
  end
end

describe Tabry::CLI::Builder do
  subject { builder.run(%w[the raw args]) }

  before do
    runner = instance_double(Tabry::Runner)
    allow(Tabry::Runner).to receive(:new).with(config: "theconfigname").and_return runner
    allow(runner).to receive(:parse).with(%w[the raw args]).and_return result
  end

  let(:result) do
    instance_double(
      Tabry::Result,
      state: Tabry::State.new({ args: [], subcommand_stack: [] }.merge(state)),
      help?: help?,
      invalid_usage_reason: invalid_usage_reason,
      named_args: named_args
    )
  end
  let(:help?) { nil }
  let(:invalid_usage_reason) { nil }
  let(:named_args) { {} }
  let(:state) { {} }

  let(:builder) { described_class.new("theconfigname", Tabry::CLI::Builder::TestCli) }

  let(:cli_class) { Tabry::CLI::Builder::TestCli }
  let(:cli_class2) { Tabry::CLI::Builder::TestCli2 }
  let(:cli_class_foo_bar) { Tabry::CLI::Builder::TestCliFooBar }
  let(:actions_run) { cli_class.actions_run }
  let(:cli_object) { cli_class.cli_object }

  before do
    cli_class.actions_run = []
    cli_class.cli_object = nil
    cli_class2.actions_run = []
    cli_class2.cli_object = nil
    cli_class_foo_bar.actions_run = []
    cli_class_foo_bar.cli_object = nil
  end

  describe "successful runs" do
    before { subject }

    describe "runs the method name, and before and after actions" do
      let(:state) { { subcommand_stack: %w[build] } }

      it { expect(actions_run).to eq %i[before_action build after_action] }
    end

    describe "changing - into _ in subcommand names, and :only on actions" do
      let(:state) { { subcommand_stack: %w[my-action] } }

      it { expect(actions_run).to eq %i[my_action after_action] }
    end

    describe "calling main as the main subcommand" do
      it { expect(actions_run).to eq %i[main after_action] }
    end

    describe "except on actions" do
      let(:state) { { subcommand_stack: %w[build2] } }

      it { expect(cli_class2.actions_run).to eq %i[build2] }
    end

    describe "handling multiple levels of subcommand routing" do
      let(:state) { { subcommand_stack: %i[foo bar waz] } }

      it "doesn't run before/after actions" do
        expect(actions_run).to eq(%i[])
      end

      it "maps to the sub-CLI" do
        expect(cli_class_foo_bar.actions_run).to eq(%i[before_action waz])
      end
    end

    describe "subcommand routing with full_method_name: true" do
      let(:state) { { subcommand_stack: %i[sub sub_sub] } }

      it "preserves the full method name" do
        expect(cli_class.actions_run).to eq(%i[])
        expect(cli_class2.actions_run).to eq(%i[sub__sub_sub after_action])
      end
    end

    describe "handling multiple levels of subcommand routing (main method)" do
      let(:state) { { subcommand_stack: %i[foo bar] } }

      it { expect(cli_class_foo_bar.actions_run).to eq(%i[before_action main]) }
    end

    describe "providing an ArgProxy in TestCLI#args" do
      let(:state) { { args: %w[123 bar] } }
      let(:named_args) { { "a" => "123" } }

      it do
        expect(cli_object.args).to be_a(Tabry::CLI::ArgProxy)
        expect(cli_object.args.a).to eq("123")
        expect(cli_object.args.waz).to be_nil
        expect(cli_object.args[1]).to eq("bar")
        expect(cli_object.args[2]).to be_nil
      end
    end

    describe "providing access to flags in TestCLI#flags" do
      let(:state) { { flags: { "foo" => "123", "bar" => true } } }

      it do
        expect(cli_object.args).to be_a(Tabry::CLI::ArgProxy)
        expect(cli_object.flags.foo).to eq("123")
        expect(cli_object.flags.bar).to be(true)
        expect(cli_object.flags.waz).to be_nil
      end
    end
  end

  describe "unsuccessful or help runs" do
    describe "invalid usage" do
      let(:invalid_usage_reason) { "Bla bla not enough arguments or something" }

      it "quits and shows an error and usage info if there is incorrect usage" do
        expect(result).to receive(:usage).and_return "example command usage"
        expect(Kernel).to receive(:exit).with(1)
        expect do
          subject
        end.to output(
          /Invalid usage: Bla bla not enough arguments or something.*example command usage/m
        ).to_stdout
      end
    end

    describe "help" do
      let(:help?) { true }

      it "quits and shows usage if help is passed in" do
        expect(result).to receive(:usage).and_return "example command usage"
        expect(Kernel).to receive(:exit).with(0)
        expect { subject }.to output(/example command usage/).to_stdout
      end
    end

    context "when the CLI class that doesn't implement a method" do
      context "when the command is valid but the CLI class doesn't implement it" do
        let(:state) { { subcommand_stack: %w[wombat] } }

        it "quits and shows an error if there is the command is valid but the CLI class doesn't implement it" do
          expect(Kernel).to receive(:exit).with(1)
          expect { subject }.to output(/FATAL: CLI does not support command wombat/).to_stderr
        end
      end

      context "when the sub-route CLI doesn't implement \"main\" and that is what is requested" do
        let(:state) { { subcommand_stack: %w[foo] } }

        it "quits and shows an error" do
          expect(Kernel).to receive(:exit).with(1)
          expect { subject }.to output(/FATAL: CLI does not support command main/).to_stderr
        end
      end
    end
  end
end
