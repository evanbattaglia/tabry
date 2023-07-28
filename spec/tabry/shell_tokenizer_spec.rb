# frozen_string_literal: true

require_relative "../../lib/tabry/shell_tokenizer"

describe Tabry::ShellTokenizer do
  describe ".split_with_comppoint" do
    it "returns the command basename, argument, and last argument" do
      str = "foo/bar abc def ghi"
      expect(described_class.split_with_comppoint(str, 13)).to eq(["bar", ["abc"], "def"])
    end

    it "returns [] as arguments and the last argument as non-nil when there is only one arg" do
      expect(described_class.split_with_comppoint("foo bar", 5)).to eq(["foo", [], "bar"])
    end

    it "handles quotes and backslashes like a shell" do
      expect(described_class.split_with_comppoint('"/foo bar/waz" a\'b \'c\\ d "ef g" "hi jk" lmn', 38)).to eq(
        [
          "waz",
          ["ab c d", "ef g"],
          "hi jk"
        ]
      )
    end

    it "uses comppoint to correctly figures out whether we are still on the last token" do
      expect(described_class.split_with_comppoint("jir add ", 7)).to eq(["jir", [], "add"])
      expect(described_class.split_with_comppoint("jir add ", 8)).to eq(["jir", ["add"], ""])
    end

    it "supports tokens with argument (tab on command), yielding the last arg" do
      expect(described_class.split_with_comppoint("abc", 2)).to eq([nil, [], "abc"])
    end

    it "supports empty strings" do
      expect(described_class.split_with_comppoint("", 0)).to eq([nil, [], ""])
    end
  end
end
