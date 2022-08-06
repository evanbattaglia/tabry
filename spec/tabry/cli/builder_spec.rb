require_relative '../../../lib/tabry/cli/builder.rb'
require_relative '../../../lib/tabry/cli/base.rb'

# probably test base & builder together in this file. and runner

class Tabry::CLI::Builder
  class TestCli < Tabry::CLI::Base
    before_action :my_before_action
    after_action :my_after_action

    def main
    end

    def build
    end

    def my_before_action
    end

    def my_after_action
    end
  end
end

describe Tabry::CLI::Builder do
  it 'runs the Machine and loads the Result'
  it 'quits and shows an error if there is incorrect usage'
  it "quits and shows an error if there is the command is valid but the CLI class doesn't implement it"
  it 'runs before actions'
  it 'runs after actions'
  it 'handles subcommand routing to other classes'
  it 'can handle multiple levels of subcommand routing'
  it 'provides an ArgProxy in TestCLI#args'
  it 'provides access to flags in TestCLI#flags'
end
