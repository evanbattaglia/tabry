require 'json'
require_relative '../../../lib/tabry/models/file_option.rb'

describe Tabry::Models::FileOption do
  subject do
    described_class.new(root: double, raw: {'type' => 'file'})
  end

  # Handled by tabru=bash/tabry-bash.sh/shell, we just return a symbol to
  # communicate to tabry-bash
  it "returns a array with a symbol" do
    expect(subject.options("whatever")).to eq([:file])
  end
end

