require_relative '../../../../lib/tabry/cli/util/config'

describe Tabry::CLI::Util::Config do
  describe ".configs" do
    it "treats the path as a glob and loads all configs (sorted filenames) to openstructs" do
      dir = File.expand_path("../../../fixtures/cli_util_config/", __dir__)
      result = described_class.configs("#{dir}/*.yml")
      expect(result.length).to eq(2)
      expect(result).to be_a(Array)
      expect(result[0]).to be_a(described_class)
      expect(result[0].waz).to eq(123)
      expect(result[1].foo).to eq("bar")
    end
  end
end
