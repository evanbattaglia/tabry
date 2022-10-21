# frozen_string_literal: true

require_relative "../../lib/tabry/shell_splitter"

describe Tabry::ShellSplitter do
  describe ".split" do
    it "returns the command basename, argument, and last argument" do
      str = "foo/bar abc def ghi"
      expect(described_class.split(str, 13)).to eq(["bar", ["abc"], "def"])
    end

    it "handles quotes and backslashes like a shell" do
      expect(described_class.split('"/foo bar/waz" a\'b \'c\\ d "ef g" "hi jk" lmn', 38)).to eq([
                                                                                                  "waz",
                                                                                                  ["ab c d", "ef g"],
                                                                                                  "hi jk"
                                                                                                ])
    end
  end
end
