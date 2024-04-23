# frozen_string_literal: true

require_relative "../../lib/tabry/machine"
require_relative "../../lib/tabry/config_loader"

describe Tabry::Machine do
  let(:config_fixture) { "#{__dir__}/../fixtures/vehicles.yaml" }
  let(:config) { Tabry::ConfigLoader.load(name: config_fixture) }

  def expect_sub_stack_and_args(arr)
    expect(subject.subcommand_stack).to eq(arr)
  end

  def expect_args(arr)
    expect(subject.args).to eq(arr)
  end

  examples = JSON.parse(File.read("#{__dir__}/../fixtures/vehicles-expectations.json"))

  examples.each do |test_name, (tokens, expectation)|
    it test_name do
      pending unless expectation
      result = described_class.run(config, tokens)
      expectation.each do |key, val|
        key = "subcommand_stack" if key == "subs"
        res = result.send(key.to_sym)
        res = res.to_s if res.is_a?(Symbol)
        expect(res).to eq(val)
      end
    end
  end
end
