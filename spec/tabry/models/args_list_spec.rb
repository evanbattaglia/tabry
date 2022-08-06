require 'json'
require_relative '../../../lib/tabry/models/args_list.rb'

describe Tabry::Models::ArgsList do
  subject do
    described_class.new(root: double, raw: [
      {'name' => 'foo', 'description' => 'the foo arg'},
      {'name' => 'bar', 'description' => 'the bar arg'},
      {'name' => 'things', 'description' => 'the waz arg', 'varargs' => true},
    ])
  end

  describe "#[]" do
    it 'provides access to arguments by index' do
      expect(subject[0].name).to eq('foo')
      expect(subject[0]).to be_a(Tabry::Models::Arg)
      expect(subject[1].name).to eq('bar')
      expect(subject[2].name).to eq('things')
      expect(subject[2]).to be_a(Tabry::Models::Arg)
      expect(subject[2].varargs?).to eq(true)
    end
  end

  describe "#varargs_arg" do
    it 'returns the vararg if there is one' do
      expect(subject.varargs_arg).to eq(subject[2])
    end

    it 'returns nil if there is no varargs' do
      args_list = described_class.new(root: double, raw: [{'name' => 'foo'}])
      expect(args_list.varargs_arg).to eq(nil)
    end
  end
end

