# frozen_string_literal: true

require "json"
require_relative "../../../lib/tabry/models/dir_option"

describe Tabry::Models::DirOption do
  subject do
    described_class.new(root: double, raw: { "type" => "dir" })
  end

  # Handled by tabry-bash/tabry-bash.sh/shell, we just return a symbol to
  # communicate to tabry-bash
  it "returns a array with a symbol" do
    expect(subject.options("whatever", {})).to eq([:directory])
  end
end
