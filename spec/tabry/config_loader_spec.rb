# frozen_string_literal: true

require_relative "../../lib/tabry/config_loader"

describe Tabry::ConfigLoader do
  before do
    @old_home = Dir.home
    @old_tabry_imports_path = ENV.fetch("TABRY_IMPORTS_PATH", nil)
  end

  after do
    ENV["HOME"] = @old_home
    ENV["TABRY_IMPORTS_PATH"] = @old_tabry_imports_path
  end

  it "loads from absolute paths" do
    config = described_class.load(name: "#{__dir__}/../fixtures/vehicles.yaml")
    expect(config).to be_a(Tabry::Models::Config)
    expect(config.main.subs.map(&:name)).to eq(
      %w[build list-vehicles move sub-with-sub-or-arg sub-with-sub-or-opt-arg sub-with-mandatory-flag]
    )
  end

  describe "use of $TABRY_IMPORTS_PATH" do
    before { ENV["TABRY_IMPORTS_PATH"] = "#{__dir__}/../fixtures/" }

    it "looks for yaml files in directories in TABRY_IMPORTS_PATH" do
      config = described_class.load(name: "vehicles")
      expect(config.main.subs.map(&:name)).to eq(
        %w[build list-vehicles move sub-with-sub-or-arg sub-with-sub-or-opt-arg sub-with-mandatory-flag]
      )
    end

    it "looks for json files in directories in TABRY_IMPORTS_PATH" do
      config = described_class.load(name: "basiccli")
      expect(config.main.subs.map(&:name)).to eq(%w[foo])
    end

    it "looks for yml files in directories in TABRY_IMPORTS_PATH" do
      config = described_class.load(name: "basiccli2")
      expect(config.main.subs.map(&:name)).to eq(%w[waz])
    end

    it "looks for json files in TABRY_IMPORTS_PATH" do
      ENV["TABRY_IMPORTS_PATH"] = "#{__dir__}/../fixtures/basiccli.json"
      config = described_class.load(name: "basiccli")
      expect(config.main.subs.map(&:name)).to eq(%w[foo])
    end
  end

  describe "use of $HOME" do
    before do
      ENV["HOME"] = "#{__dir__}/../fixtures/dir_with_dot_tabry/"

      # TABRY_IMPORTS_PATH is set first, so we have to null it out in case it is already set:
      ENV["TABRY_IMPORTS_PATH"] = nil
    end

    it "looks for json files in HOME/.tabry" do
      config = described_class.load(name: "basiccli")
      expect(config.main.subs.map(&:name)).to eq(%w[foo])
    end
  end

  context "when it can't find a config" do
    it "raises an error" do
      expect do
        described_class.load(name: "fj093jf04309fj3490fj3490f43j90kldfsjghkljasdghklshfsdkhjagfklj")
      end.to raise_error(
        described_class::ConfigNotFound,
        /Could not find Tabry config fj093jf04309fj3490fj3490f43j90kldfsjghkljasdghklshfsdkhjagfklj\.\(json, yml, yaml\)/
      )
    end
  end
end
