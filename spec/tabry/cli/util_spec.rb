# frozen_string_literal: true

require_relative "../../../lib/tabry/cli/util"

describe Tabry::CLI::Util do
  describe ".make_cmdline" do
    it "escapes a single string" do
      expect(described_class.make_cmdline(
               "hello %s", "world;abc"
             )).to eq(
               "hello world\\;abc"
             )
    end

    it "escapes multiple string arguments" do
      expect(described_class.make_cmdline(
               "hello %s hi %s", "world;abc", "def;ghi"
             )).to eq(
               "hello world\\;abc hi def\\;ghi"
             )
    end

    it "escapes array arguments" do
      # args is an array of strings and arrays
      expect(described_class.make_cmdline(
               "hello %s hi %s", "world;abc", ["foo;bar", "waz;ok"]
             )).to eq(
               "hello world\\;abc hi foo\\;bar waz\\;ok"
             )
    end

    it "treats a single array of strings as a list of args, not as one array arg" do
      # args is an array with one array of strings
      # an improvement might be to figure out how
      # many '%s's there are in the cmdline
      expect(described_class.make_cmdline(
               "hello %s hi %s", ["world;abc", "foo;bar"]
             )).to eq(
               "hello world\\;abc hi foo\\;bar"
             )
    end

    it "escapes arrays if given one array of mixed strings and arrays" do
      expect(described_class.make_cmdline(
               "hello %s hi %s", [["world;abc", "foo;bar"], "waz;ok"]
             )).to eq(
               "hello world\\;abc foo\\;bar hi waz\\;ok"
             )
    end

    it "can send a single array argument by wrapping in an array" do
      # args is an array with one array of one array
      expect(described_class.make_cmdline(
               "hello %s hi", [["foo;bar", "waz;ok"]]
             )).to eq(
               "hello foo\\;bar waz\\;ok hi"
             )
    end

    it "can merge_stderr" do
      expect(described_class.make_cmdline(
               "echo %s | cat", "a", merge_stderr: true
             )).to eq(
               "{ echo a | cat ;} 2>&1"
             )
    end
  end

  describe "open_web_page" do
    it 'uses "xdg-open" when on Linux' do
      stub_const("RUBY_PLATFORM", "x86_64-linux")
      expect(Kernel).to receive("system") do |cmdline|
        expect(cmdline).to include("nohup xdg-open ")
      end
      described_class.open_web_page("http://example.com")
    end

    it 'uses "open" when on Darwin' do
      stub_const("RUBY_PLATFORM", "x86_64-darwin")
      expect(Kernel).to receive("system") do |cmdline|
        expect(cmdline).to include("nohup open ")
      end
      described_class.open_web_page("http://example.com")
    end
  end

  describe "backtick_or_die" do
    before do
      allow(Kernel).to receive(:exit)
      allow(Kernel).to receive(:warn)
    end

    context "when the command returns a non-zero status code" do
      before do
        described_class.backtick_or_die("echo abc && echo def && echo ghi && false")
      end

      it "prints out the output" do
        expect(Kernel).to have_received(:warn).with(
          a_string_including("\ndef\n")
        )
      end

      it "exits with a non-zero status code" do
        expect(Kernel).to have_received(:exit).with(1)
      end
    end

    context "when the command does not exist" do
      before do
        described_class.backtick_or_die("theresnowayanyonehasthiscommandinstalled-randomstuff-2390832190832jk4398190fdlksjhfdsalkjlkfdsaj43098432908fd")
      end

      it "exits with a non-zero status code" do
        expect(Kernel).to have_received(:exit).with(1)
      end

      it "says that the command does not exist" do
        expect(Kernel).to have_received(:warn).with(
          a_string_including("command does not exist")
        )
      end
    end
  end
end
