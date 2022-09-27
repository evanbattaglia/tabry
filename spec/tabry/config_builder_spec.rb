# frozen_string_literal: true

require "yaml"
require "json"
require_relative "../../lib/tabry/config_builder"

describe Tabry::ConfigBuilder do
  def sort_nested_hashes(object)
    case object
    when Hash
      object.sort_by { |key, _val| key }.to_h.transform_values { |val| sort_nested_hashes(val) }
    when Array
      object.map { |val| sort_nested_hashes(val) }
    else
      object
    end
  end

  %w[Args Defs Flags Subs Underscoresdashes].each do |fixture|
    context "#{fixture} test fixture" do
      it "matches what would be produced by the equivalent (old tabry language) tabry file" do
        require_relative "../fixtures/config_builder/#{fixture.downcase}"
        actual = Tabry::Spec::Fixtures::ConfigBuilder.const_get(fixture.to_sym)._raw
        expected = YAML.load_file(File.expand_path("../fixtures/config_builder/#{fixture.downcase}.yml", __dir__))

        actual = JSON.pretty_generate(sort_nested_hashes(actual))
        expected = JSON.pretty_generate(sort_nested_hashes(expected))

        expect(actual).to eql(expected)
      end
    end
  end
end
