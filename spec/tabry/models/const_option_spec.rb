# frozen_string_literal: true

require "json"
require_relative "../../../lib/tabry/models/const_option"

describe Tabry::Models::ConstOption do
  subject do
    described_class.new(root: double, raw: { "type" => "const", "value" => "foobar" })
  end

  it "filters by prefix" do
    expect(subject.options("")).to eq(%w[foobar])
    expect(subject.options("f")).to eq(%w[foobar])
    expect(subject.options("foo")).to eq(%w[foobar])
    expect(subject.options("w")).to eq(%w[])
  end
end
