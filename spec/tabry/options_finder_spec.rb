require_relative '../../lib/tabry/config_loader.rb'
require_relative '../../lib/tabry/options_finder.rb'
require_relative '../../lib/tabry/result.rb'
require_relative '../../lib/tabry/state.rb'

describe Tabry::OptionsFinder do
  let(:config_fixture) { "#{__dir__}/../fixtures/vehicles.yaml" }
  let(:config) { Tabry::ConfigLoader.load(name: config_fixture) }
  let(:state) { {} }

  EXAMPLES = {
    'lists possible subcommands of the main command' => [
      %w[build list-vehicles move sub-with-sub-or-arg sub-with-mandatory-flag],
      {}
    ],
    'lists possible subcommands of a subcommand' => [
      %w[go stop crash freeway-crash],
      subs: %w[move]
    ],
    'lists possible arguments (const)' => [
      %w[car bike],
      subs: %w[move go]
    ],
    'lists both possible args and subs if a subcommand can take either' => [
      %w[x y z subsub],
      subs: %w[sub-with-sub-or-arg]
    ],
    'lists possible flags if the last token starts with a dash' => [
      %w[--verbose --speed --output-to-file --output-to-directory --dry-run],
      subs: %w[move crash],
      token: '-'
    ],
    "doesn't list a flag if it has already been given" => [
      %w[--verbose --speed --output-to-file --output-to-directory],
      flags: {'dry-run' => true},
      subs: %w[move crash],
      token: '-'
    ],
    "lists only a mandatory flag if it hasn't been given yet" => [
      %w[--mandatory],
      subs: %w[sub-with-mandatory-flag],
    ],
    "lists other args after a mandatory flag has been given" => [
      %w[a b c],
      subs: %w[sub-with-mandatory-flag],
      flags: {'mandatory' => 'foo'}
    ],
    'lists possibilities for a flag arguments (shell)' => [
      %w[fast slow],
      subs: %w[move crash],
      mode: :flagarg,
      current_flag: 'speed',
    ],
    'lists possibilities for a flag arguments (file, const)' => [
      [:file, "-"],
      subs: %w[move crash],
      mode: :flagarg,
      current_flag: 'output-to-file',
    ],
    'lists possibilities for a flag arguments (dir)' => [
      [:directory],
      subs: %w[move crash],
      mode: :flagarg,
      current_flag: 'output-to-directory',
    ],
    'lists nothing if no options are defined' => [
      [],
      subs: %w[sub-with-sub-or-arg],
      mode: :flagarg,
      current_flag: 'mandatory'
    ],
  }

  EXAMPLES.each do |name, (expected_options, hash)|
    it name do
      token = hash.delete(:token)
      hash[:subcommand_stack] = hash.delete(:subs) || []
      defaults = {mode: :subcommand, args: [], flags: {}, current_flag: nil, dashdash: nil}
      result = Tabry::Result.new(config, Tabry::State.new(defaults.merge(hash)))
      expect(described_class.options(result, token)).to match_array expected_options
    end
  end

end
