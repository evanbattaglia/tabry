# frozen_string_literal: true

require "json"
require_relative "../../../lib/tabry/models/options_list"

describe Tabry::Models::OptionsList do
  subject do
    described_class.new(root: double, raw: JSON.parse(raw_array.to_json))
  end

  let(:raw_array) do
    [
      { type: "file" },
      { type: "shell", value: "echo a && echo b" },
      { type: "const", value: "foo" },
      { type: "const", value: "bar" },
      { type: "dir" },
    ]
  end

  it "is enumerable over the options it creates" do
    expect(subject.any? { |opt| opt.type == "dir" }).to be(true)
    expect(subject.map(&:class)).to eq([
                                         Tabry::Models::FileOption,
                                         Tabry::Models::ShellOption,
                                         Tabry::Models::ConstOption,
                                         Tabry::Models::ConstOption,
                                         Tabry::Models::DirOption,
                                       ])
  end

  describe "options" do
    it "aggregates options from all options" do
      opts_results = [
        %w[foo bar waz],
        %w[a b c],
        %w[1 a foo],
        %w[ok ok ok],
        %w[d c b a]
      ]
      subject.each_with_index do |opt, i|
        expect(opt).to receive(:options).with("some-token").and_return(opts_results[i])
      end
      expect(subject.options("some-token")).to match_array(%w[a b c d foo bar waz ok 1])
    end
  end
end
