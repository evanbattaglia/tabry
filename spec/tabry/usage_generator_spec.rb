require_relative '../../lib/tabry/usage_generator'

describe Tabry::UsageGenerator do
  let(:config_fixture) { "#{__dir__}/../fixtures/vehicles.yaml" }
  let(:config) { Tabry::ConfigLoader.load(name: config_fixture) }

  describe 'args' do
    it
  end

  describe 'subcommands' do
    it
  end

  describe 'flags' do
    it
  end

  describe "a subcommand's args/subcommands/flags" do
    it
  end
end
