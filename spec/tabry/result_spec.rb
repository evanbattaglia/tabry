# frozen_string_literal: true

require_relative "../../lib/tabry/result"
require_relative "../../lib/tabry/config_loader"
require_relative "../../lib/tabry/state"

describe Tabry::Result do
  subject do
    described_class.new(config, state)
  end

  let(:config_fixture) { "#{__dir__}/../fixtures/vehicles.yaml" }
  let(:config) { Tabry::ConfigLoader.load(name: config_fixture) }

  describe "#current_sub" do
    let(:state) { Tabry::State.new(subcommand_stack: %w[move crash]) }

    it "returns the last subcommand" do
      expect(subject.current_sub).to be_a(Tabry::Models::Sub)
      expect(subject.current_sub.name).to eq("crash")
    end
  end

  describe "#invalid_usage_reason" do
    def reason(state_hash)
      state = { mode: :subcommand, args: [], flags: {} }.merge(state_hash)
      described_class.new(config, Tabry::State.new(**state)).invalid_usage_reason
    end

    it "returns nil if everything is fine (subcommand with no args)" do
      expect(reason(
               subcommand_stack: %w[list-vehicles]
             )).to be_nil
    end

    it "complains if mandatory args are not given" do
      expect(reason(
               subcommand_stack: %w[move go]
             )).to eq('missing argument "vehicle-type"')
    end

    it "complains if a mandatory subcommand (of the main command) is not given" do
      expect(reason(
               subcommand_stack: %w[]
             )).to eq("missing subcommand")
    end

    it "complains if a mandatory subcommand (of a subcommand) is not given" do
      expect(reason(
               subcommand_stack: %w[move]
             )).to eq("missing subcommand")
    end

    it "complains if a mandatory subcommand or arg is not given" do
      expect(reason(
               subcommand_stack: %w[sub-with-sub-or-arg]
             )).to eq("missing subcommand or arg(s)")
    end

    it "doesn't complain if mandatory args are given" do
      expect(reason(
               subcommand_stack: %w[move go],
               args: %w[vehicle1],
               flags: { "dry-run" => true, "output-to-file" => "some-file" }
             )).to be_nil

      expect(reason(
               subcommand_stack: %w[sub-with-sub-or-arg],
               args: %w[arg]
             )).to be_nil
    end

    it "doesn't complain if given no args to a subcommand with subcommands and optional args" do
      expect(reason(subcommand_stack: %w[sub-with-sub-or-opt-arg])).to be_nil
    end

    it "complains if mandatory varargs are not given" do
      expect(reason(
               subcommand_stack: %w[build]
             )).to eq("missing one or more args")
    end

    it "doesn't complain if one vararg is given" do
      expect(reason(
               subcommand_stack: %w[build],
               args: %w[vehicle1]
             )).to be_nil

      expect(reason(
               subcommand_stack: %w[move freeway-crash],
               args: %w[vehicle1 vehicle2]
             )).to be_nil
    end

    it "doesn't complain if multiple varargs are given" do
      expect(reason(
               subcommand_stack: %w[build],
               args: %w[vehicle1 vehicle2 vehicle3]
             )).to be_nil

      expect(reason(
               subcommand_stack: %w[move freeway-crash],
               args: %w[vehicle1 vehicle2 vehicle3 vehicle4]
             )).to be_nil
    end

    it "doesn't complain if an optional arg is not given" do
      expect(reason(
               subcommand_stack: %w[move crash],
               args: %w[vehicle1]
             )).to be_nil
    end

    it "doesn't complain if an optional arg is given" do
      expect(reason(
               subcommand_stack: %w[move crash],
               args: %w[vehicle1 vehicle2]
             )).to be_nil
    end

    it "complains if too many args are given" do
      expect(reason(
               subcommand_stack: %w[move crash],
               args: %w[vehicle1 vehicle2 vehicle3]
             )).to eq("got 3 args, must be between 1 and 2")
    end

    # TODO: test also in machine
    it "complains if a mandatory flag is not given" do
      expect(reason(
               subcommand_stack: %w[sub-with-mandatory-flag]
             )).to eq("missing required flag mandatory")
    end

    it "doesn't complain if a mandatory flag is given" do
      expect(reason(
               subcommand_stack: %w[sub-with-mandatory-flag],
               flags: { "mandatory" => "foo" }
             )).to be_nil
    end
  end

  describe "#usage" do
    it "uses UsageGenerator" do
      state = { mode: :subcommand, args: [], flags: {}, subcommand_stack: %w[move go] }
      expect(Tabry::UsageGenerator).to receive(:new) do |sub_stack, cmd|
        expect(sub_stack.map(&:class)).to eq([Tabry::Models::Sub, Tabry::Models::Sub, Tabry::Models::Sub])
        expect(cmd).to eq("vehicles")
        instance_double(Tabry::UsageGenerator, usage: "foobar")
      end
      usage = described_class.new(config, Tabry::State.new(**state)).usage
      expect(usage).to eq("foobar")
    end

    it "passes in passed-in command to UsageGenerator" do
      state = { mode: :subcommand, args: [], flags: {}, subcommand_stack: %w[] }
      expect(Tabry::UsageGenerator).to receive(:new) do |_sub_stack, cmd|
        expect(cmd).to eq("customcmd")
        instance_double(Tabry::UsageGenerator, usage: "foobar")
      end
      usage = described_class.new(config, Tabry::State.new(**state)).usage("customcmd")
      expect(usage).to eq("foobar")
    end
  end

  describe "#top_level?" do
    context "there is a subcommand" do
      let(:state) { Tabry::State.new(subcommand_stack: %w[move crash]) }

      it { expect(subject.top_level?).to be(false) }
    end

    context "if there is no subcommand" do
      let(:state) { Tabry::State.new(subcommand_stack: %w[], args: %w[foo]) }

      it { expect(subject.top_level?).to be(true) }
    end
  end

  describe "#help?" do
    context "if help is true in the state" do
      let(:state) { Tabry::State.new(subcommand_stack: %w[move crash], help: true) }

      it { expect(subject.help?).to be(true) }
    end

    context "if help is absent/nil from the state" do
      let(:state) { Tabry::State.new(subcommand_stack: %w[move crash]) }

      it { expect(subject.help?).to be_falsey }
    end
  end

  describe "#named_args" do
    let(:state) do
      Tabry::State.new(subcommand_stack: %w[move crash], args: %w[car bicycle])
    end

    it "returns a hash of all the named args" do
      expect(subject.named_args).to eq(
        "vehicle-type" => "car",
        "crash-into-vehicle" => "bicycle"
      )
    end

    context "with varargs" do
      let(:state) { Tabry::State.new(subcommand_stack: %w[build], args: %w[car jeep moped]) }

      it "puts the varargs in the hash as an array" do
        expect(subject.named_args).to eq("vehicle-types" => %w[car jeep moped])
      end
    end

    context "with optional, non-empty varargs" do
      let(:state) do
        Tabry::State.new(subcommand_stack: %w[move freeway-crash], args: %w[car jeep moped])
      end

      it "puts the varargs in the hash as an array" do
        expect(subject.named_args).to eq(
          "vehicle-type" => "car",
          "crash-into-vehicles" => %w[jeep moped]
        )
      end
    end

    context "with empty optional varargs" do
      let(:state) do
        Tabry::State.new(subcommand_stack: %w[move freeway-crash], args: %w[car])
      end

      it "puts the varargs in the hash as an array" do
        expect(subject.named_args).to eq(
          "vehicle-type" => "car",
          "crash-into-vehicles" => %w[]
        )
      end
    end
  end
end
