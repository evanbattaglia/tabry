# frozen_string_literal: true

require "json"
require_relative "../../../lib/tabry/models/config"

describe Tabry::Models::Config do
  subject { described_class.new(raw: JSON.parse(config_hash.to_json)) }

  let(:config_hash) do
    {
      cmd: "foo",
      main: {
        subs: [
          {
            name: "sub1",
            description: "first-level sub",
            subs: [
              {
                name: "sub1.1",
                description: "sub under a sub"
              }
            ]
          },
          {
            name: "sub2",
            description: "first-level sub 2",
            subs: [
              { name: "sub21", subs: [{ name: "subs211" }] }
            ],
          }
        ]
      }
    }
  end

  describe "#as_json" do
    it "returns the config as a hash" do
      expect(subject.as_json).to eq(config_hash)
    end
  end

  describe "#dig_sub_array" do
    it "returns the array of subcommands leading up to the specified subcommand" do
      res = subject.dig_sub_array(%w[sub1 sub1.1])
      expect(res.map(&:name)).to eq([nil, "sub1", "sub1.1"])
      expect(res).to eq([
                          subject.main,
                          subject.main.subs[0],
                          subject.main.subs[0].subs[0]
                        ])
    end

    it "returns an array with just the main subcommand if an empty array is passed in" do
      res = subject.dig_sub_array(%w[])
      expect(res).to eq([subject.main])
    end
  end

  describe "#dig_sub" do
    it "returns the sub referenced" do
      expect(subject.dig_sub(%w[sub2])).to eq(subject.main.subs[1])
    end

    it "returns the main sub if an empty array is passed" do
      expect(subject.dig_sub(%w[])).to eq(subject.main)
    end
  end
end
