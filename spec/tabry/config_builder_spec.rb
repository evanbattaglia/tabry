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

  it "defines a 'completion' shortcut with 'completion' and 'completion__bash' subs" do
    config = described_class.build do
      completion
    end

    expect(config._raw.dig("main", "subs")).to eq([
                                                    {
                                                      "description" => "Get tab completion shell config",
                                                      "name" => "completion",
                                                      "args" => [
                                                        {
                                                          "description" => "(for internal usage, when used instead of subcommand) full command line for getting completion options",
                                                          "name" => "cmd_line"
                                                        },
                                                        {
                                                          "description" => "(for internal usage, when used instead of subcommand) comp point",
                                                          "name" => "comp_point"
                                                        }
                                                      ],
                                                      "subs" => [
                                                        {
                                                          "description" => "Get tab completion for bash or zsh",
                                                          "name" => "bash"
                                                        }
                                                      ]
                                                    }
                                                  ])
  end
end
