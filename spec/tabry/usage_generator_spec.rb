# frozen_string_literal: true

require_relative "../../lib/tabry/usage_generator"
require_relative "../../lib/tabry/config_loader"

describe Tabry::UsageGenerator do
  let(:config_fixture) { "#{__dir__}/../fixtures/vehicles.yaml" }
  let(:config) { Tabry::ConfigLoader.load(name: config_fixture) }
  let(:usage) do
    str = described_class.new(config.dig_sub_array(sub_stack), config.cmd).usage
    decolorified = str.gsub(/\e\[(\d+)m/, "")
    decolorified
  end

  describe "args" do
    let(:sub_stack) { %w[move crash] }

    it "shows args" do
      expect(usage).to match(/^ARGS.*^ *vehicle-type/m)
    end

    it "shows optional args and descriptions" do
      expect(usage).to match(/^ *crash-into-vehicle \(optional\)\n^ *Crash into another vehicle/m)
    end

    it "shows args in the Usage line" do
      expect(usage).to include "Usage: vehicles move crash <vehicle-type> [<crash-into-vehicle>]"
    end
  end

  describe "varargs" do
    let(:sub_stack) { %w[move freeway-crash] }

    it "shows varargs with the title" do
      expect(usage).to include \
        "vehicles move freeway-crash <vehicle-type> [<vehicle to crash into> [<vehicle to crash into>...]]"
    end
  end

  describe "subcommands" do
    let(:sub_stack) { %w[move] }

    it "lists subcommands" do
      expect(usage).to match(/^SUBCOMMANDS.*^ *crash/m)
    end

    it "shows a subcommand alias" do
      expect(usage).to include "go (alias: g)"
    end

    it "shows subcommand aliases" do
      expect(usage).to include "freeway-crash (aliases: pileup, p)"
    end
  end

  describe "flags" do
    let(:sub_stack) { %w[move crash] }

    it "shows flags with titles" do
      expect(usage).to match(/^ *FLAGS.*^ *--dry-run.*Don't actually crash/m)
    end

    it "shows flags aliases and args" do
      expect(usage).to include "--output-to-file, -f <arg>"
    end
  end
end
