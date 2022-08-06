require 'json'
require_relative '../../../lib/tabry/models/subs_list.rb'

describe Tabry::Models::SubsList do
  describe "#by_name" do
    subject do
      described_class.new(root: double, raw: [
        {'name' => 'foo', 'description' => 'the foo sub'},
        {'name' => 'bar', 'description' => 'the bar subcommand'},
        {'name' => 'waz', 'description' => 'the waz subcommand'},
      ])
    end

    it 'finds subcommands by name' do
      bar = subject.by_name['bar']
      expect(bar).to be_a(Tabry::Models::Sub)
      expect(bar.name).to eq('bar')
      expect(bar.description).to eq('the bar subcommand')
      expect(subject.by_name['waz'].name).to eq('waz')
    end
  end
end
