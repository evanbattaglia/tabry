# frozen_string_literal: true

require_relative "../../lib/tabry/cli/arg_proxy"

describe Tabry::CLI::ArgProxy do
  let(:named_args) do
    {
      "abc" => "123",
      "def" => "456",
      "ghi" => ["789", "000"],
    }
  end
  let(:args) { described_class.new(named_args.values, named_args) }

  describe "#[]" do
    it "makes args accessible by name as a hash key (string)" do
      expect(args["def"]).to eq("456")
    end

    it "makes args accessible by name as a hash key (symbol)" do
      expect(args[:ghi]).to eq(%w[789 000])
    end

    it "makes args accessible by index" do
      expect(args[0]).to eq("123")
      expect(args[1]).to eq("456")
    end

    it "returns ungiven args as nil" do
      expect(args["foo"]).to be_nil
      expect(args[:bar]).to be_nil
      expect(args[3]).to be_nil
    end
  end

  describe "#accessing as a method" do
    it "makes args accessible by name as a method" do
      expect(args.def).to eq("456")
    end

    it "returns nil if not found" do
      expect(args.foo).to be_nil
    end
  end

  describe "#reqd" do
    it "provides access to arguments through reqd" do
      expect(args.reqd.def).to eq("456")
    end

    it "prints an error and exits if read thru reqd and the argument (name) is not found" do
      expect(args.reqd).to receive(:exit).with(1)
      expect do
        args.reqd.foo
      end.to output(/FATAL: Missing required argument foo/).to_stderr
    end

    it "prints an error and exits if read thru reqd and the argument (index) is not found" do
      expect(args.reqd).to receive(:exit).with(1)
      expect do
        args.reqd[3]
      end.to output(/FATAL: Missing required argument number 4/).to_stderr
    end
  end

  describe "#slice" do
    it "returns a hash with just the keys given" do
      expect(args.slice(:abc, :ghi)).to eq(abc: "123", ghi: %w[789 000])
    end
  end

  it "is enumerable like an array" do
    proxy = described_class.new(%w[a b c], {})
    expect(proxy.map { |arg| "ok" + arg }).to eq(%w[oka okb okc])
  end
end
