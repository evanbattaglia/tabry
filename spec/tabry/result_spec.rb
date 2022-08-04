require_relative '../../lib/tabry/result.rb'
require_relative '../../lib/tabry/config_loader.rb'
require_relative '../../lib/tabry/state.rb'

describe Tabry::Result do
  let(:config_fixture) { "#{__dir__}/../fixtures/vehicle.yaml" }
  let(:config) { Tabry::ConfigLoader.load(name: config_fixture) }

  describe 'subcommands' do
    let(:token) {  }
  end

  describe '#current_sub' do
    it 'returns the last subcommand'
  end

  describe '#invalid_usage_reason' do
    it 'complains on bogus subcommands'
    it 'complains on bogus subcommands of subcommands'
    it 'complains if mandatory args are not given'
    it "complains if a mandatory subcommand is not given"
    it "complains if a mandatory subcommand or arg is not given"
    it "doesn't complain if mandatory args are given"
    it "complains if mandatory varargs are not given"
    it "doesn't complain if one varargs are given"
    it "doesn't complain if multiple varargs are given"
    it "doesn't complain if an optional arg is not given"
    it "doesn't complain if an optional arg is given"
    it "complains if too many args are given"
    it "complains if a mandatory flag is not given" # TODO test also in machine
  end

  describe '#varargs' do
    it 'returns the varargs'
    it 'returns empty if there are no varargs present'
    it 'returns empty if there are no varargs applicable'
  end

  describe '#top_level?' do
    it 'returns true if there is no subcommand'
    it 'returns false if there is a subcommand'
  end

  describe '#help?' do
    it 'returns true if help is true in the state'
    it 'returns false if help is false in the state'
  end

  describe '#named_args' do
    it 'returns a hash of all the named args'
  end
end
