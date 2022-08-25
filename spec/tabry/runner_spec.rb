# frozen_string_literal: true

require_relative "../../lib/tabry/runner"

describe Tabry::Runner do
  subject do
    described_class.new(config_name: "configname")
  end

  let(:config) { instance_double(Tabry::Models::Config) }
  let(:state) { instance_double(Tabry::State) }

  before do
    allow(Tabry::ConfigLoader).to receive(:load).with(name: "configname").and_return(config)
  end

  describe "#parse" do
    it "calls the machine and makes a result" do
      expect(Tabry::Machine).to receive(:run).with(config, %w[foo bar]).and_return state
      res = subject.parse(%w[foo bar])
      expect(res).to be_a(Tabry::Result)
      expect(res.state).to eq(state)
      expect(res.config).to eq(config)
    end
  end

  describe "#options" do
    it "runs OptionsFinder" do
      res = instance_double(Tabry::Result)
      expect(subject).to receive(:parse).with(%w[foo bar]).and_return res
      expect(Tabry::OptionsFinder).to receive(:options).with(res, "waz").and_return %w[a b c]
      expect(subject.options(%w[foo bar], "waz")).to eq(%w[a b c])
    end
  end
end
