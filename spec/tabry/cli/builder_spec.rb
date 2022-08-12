require_relative '../../../lib/tabry/cli/builder.rb'
require_relative '../../../lib/tabry/cli/base.rb'

# probably test base & builder together in this file. and runner

class Tabry::CLI::Builder
  class TestCli < Tabry::CLI::Base
    def << self
      attr_accessor :actions_run, :cli_object
    end

    before_action :my_before_action
    after_action :my_after_action

    def main
      self.actions_run << :main
    end

    def build
      self.actions_run << :build
    end

    def my_action
      self.actions_run << :my_action
    end

    def sub__sub_sub
      self.actions_run << :sub__sub_sub
    end

    def my_before_action
      self.actions_run << :before_action
      self.cli_object = self
    end

    def my_after_action
      self.actions_run << :after_action
    end
  end
end

describe Tabry::CLI::Builder do
  before do
    runner = instance_double(Tabry::Runner)
    allow(Tabry::Runner).to receive(:new).with(config_name: 'theconfigname').and_return runner
    allow(runner).to receive(:parse).with(%w[the raw args]).and_return result
  end

  let(:result) do
    instance_double(
      Tabry::Result,
      state: Tabry::State.new(state.marge(args: named_args.values)),
      help?: help?,
      invalid_usage_reason: invalid_usage_reason,
      named_args: named_args
    )
  end
  let(:help?) { nil }
  let(:invalid_usage_reason) { nil }
  let(:named_args) { {} }

  subject do
    described_class.new('theconfigname', Tabry::CLI::Builder::TestCli).run(%w[the raw args])
  end

  let(:cli_class) { Tabry::CLI::Builder::TestCli }
  let(:actions_run) { cli_class.actions_run }
  let(:cli_object) { cli_class.cli_object}

  before do
    cli_class.actions_run = []
    cli_class.cli_object = nil
  end

  describe 'successful runs' do
    before { subject }

    describe 'runs the method name, and before and after actions' do
      let(:state) { { subcommand_stack: %w[my_action] } }
      it { expect(actions_run).to eq %i[before_action build after_action] }
    end

    describe 'changing - into _ in subcommand names' do
      let(:state) { { subcommand_stack: %w[my_action] } }
      it { expect(actions_run).to eq %i[before_action my_action after_action] }
    end

    it 'calls main as the main subcommand'
    it 'can handle multiple levels of subcommand routing'
    it 'handles subcommand routing to other classes'
    it 'provides an ArgProxy in TestCLI#args'
    it 'provides access to flags in TestCLI#flags'
  end

  describe 'unsuccessful or help runs' do
    it 'quits and shows an error if there is incorrect usage'
    it 'quits and shows usage if help is passed in'
    it "quits and shows an error if there is the command is valid but the CLI class doesn't implement it"
  end
end
