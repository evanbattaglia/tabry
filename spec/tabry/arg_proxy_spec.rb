require_relative '../../lib/tabry/cli/arg_proxy.rb'

describe Tabry::CLI::ArgProxy do
  let(:named_args) do
    {
      'abc' => '123',
      'def' => '456',
      'ghi' => ['789', '000'],
    }
  end
  subject { described_class.new(named_args.values, named_args) }

  describe '#[]' do
    it 'makes args accessible by name as a hash key (string)'
    it 'makes args accessible by name as a hash key (symbol)'
    it 'makes args accessible by index'
  end

  describe '#accessing as a method' do
    it 'makes args accessible by name as a method'
    it 'returns nil if not found'
  end

  describe '#reqd' do
    it 'provides access to arguments through reqd'
    it 'prints an error and exits if read thru reqd and the argument (name) is not found'
    it 'prints an error and exits if read thru reqd and the argument (index) is not found'
  end

  describe '#slice' do
    it 'returns a hash with just the arg keys'
  end

  it 'is enumerable like an array' do
    proxy = described_class.new(%w[a b c], {})
    expect(proxy.map{|arg| "ok" + arg}).to eq(%w[oka okb okc])
  end
end
