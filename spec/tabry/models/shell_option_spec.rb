require 'json'
require_relative '../../../lib/tabry/models/shell_option.rb'

describe Tabry::Models::ShellOption do
  subject do
    described_class.new(root: double, raw: {
      'type' => 'shell', 'value' => 'echo a && echo a1 && echo b'
    })
  end

  it "filters by prefix" do
    expect(subject.options("")).to match_array(%w[a a1 b])
    expect(subject.options("a")).to match_array(%w[a a1])
    expect(subject.options("a1")).to match_array(%w[a1])
    expect(subject.options("a1 ")).to match_array(%w[])
  end
end

