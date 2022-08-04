require_relative '../../lib/tabry/machine.rb'
require_relative '../../lib/tabry/config_loader.rb'

describe Tabry::Machine do
  let(:config_fixture) { "#{__dir__}/../fixtures/vehicle.yaml" }
  let(:config) { Tabry::ConfigLoader.load(name: config_fixture) }

  def expect_sub_stack_and_args(arr)
    expect(subject.subcommand_stack).to eq(arr)
  end

  def expect_args(arr)
    expect(subject.args).to eq(arr)
  end

  EXAMPLES = {
    'handles subcommands' => [
      %w[build],
      subs: %w[build], mode: :subcommand
    ],
    'handles bogus subcommands' => [
      %w[bogus],
      subs: [], args: %w[bogus]
    ],
    'handles bogus subcommands of subcommands are treated as args' => [
      %w[move bogus bogus2],
      subs: %w[move], args: %w[bogus bogus2], mode: :subcommand
    ],
    'handles subcommands of subcommands' => [
      %w[move go],
      subs: %w[move go],
    ],
    'handles argsuments' => [
      %w[build arg1 arg2],
      subs: %w[build], args: %w[arg1 arg2]
    ],
    'handles flags' => [
      %w[build -v],
      subs: %w[build], flags: {'verbose' => true}, args: [], mode: :subcommand
    ],
    'handles long flags' => [
      %w[--verbose build],
      subs: %w[build], flags: {'verbose' => true}, args: [], mode: :subcommand
    ],
    'handles flags interspersed with arguments' => [
      %w[move -v crash arg1 --dry-run arg2 arg3],
      subs: %w[move crash], args: %w[arg1 arg2 arg3],
      flags: {'dry-run' => true, 'verbose' => true}, mode: :subcommand
    ],
    'handles flags with an argument' => [
      %w[move crash --dry-run arg1 -f file arg2 arg3],
      subs: %w[move crash], args: %w[arg1 arg2 arg3],
      flags: {'dry-run' => true, 'output-to-file' => 'file'}, mode: :subcommand
    ],
    'handles double-dash to stop parsing of flags' => [
      %w[move crash -- --dry-run arg1 -f file arg2 arg3],
      subs: %w[move crash], args: %w[--dry-run arg1 -f file arg2 arg3], mode: :subcommand
    ],
    'handles unknown long flags as args' => [
      %w[move crash --notaflag arg2],
      subs: %w[move crash], args: %w[--notaflag arg2], mode: :subcommand
    ],
    'handles unknown short flags as args' => [
      %w[move crash -x arg2 --dry-run],
      subs: %w[move crash], args: %w[-x arg2], flags: {"dry-run" => true}, mode: :subcommand
    ],
    'handles --help' => [
      %w[move --help],
      subs: %w[move], flags: {}, args: [], help: true, mode: :subcommand
    ],
    'handles -?' => [
      %w[move foo bar --help waz],
      subs: %w[move], flags: {}, args: %w[foo bar waz], help: true
    ],
    'ignores -?/--help after double-dash' => [
      %w[move -- --help -? -- -],
      subs: %w[move], flags: {}, args: %w[--help -? -- -], help: nil
    ],
    'sets mode to flagarg when waiting for a flag argument' => [
      %w[move crash --dry-run arg1 -f],
      subs: %w[move crash], args: %w[arg1], flags: {'dry-run' => true},
      mode: :flagarg, current_flag: 'output-to-file'
    ],
  }

  EXAMPLES.each do |test_name, (tokens, expectation)|
    it test_name do
      pending unless expectation
      result = described_class.run(config, tokens)
      expectation.each do |key, val|
        key = :subcommand_stack if key == :subs
        expect(result.send(key)).to eq(val)
      end
    end
  end
end

