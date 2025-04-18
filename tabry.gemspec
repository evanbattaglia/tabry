# frozen_string_literal: true

require_relative "lib/tabry/version"

Gem::Specification.new do |s|
  s.name        = "tabry"
  s.version     = Tabry::VERSION
  s.summary     = "Tab completion and CLIs extraordinaire"
  s.authors     = ["Evan Battaglia"]
  s.email       = "battaglia.evan@gmail.com"
  s.homepage    = "https://github.com/evanbattaglia/tabry"
  s.license     = "MIT"
  s.required_ruby_version = ">= 3.0"

  treesitter_files = %w[
    binding.gyp
    bindings/**/*
    Cargo.toml
    corpus/**/*
    grammar.js
    jest_fixtures/**/*
    package.json
    parser_compile.sh
    README.md
    src/**/*
    tabry-compile.js
    tabry-compile.test.js
  ]

  s.files         = Dir.glob("{lib,bin,sh,spec}/**/*") + %w[tabry.gemspec] +
                    treesitter_files.map { |path| Dir.glob("treesitter/#{path}") }

  # TODO: more cargo cult possibly:
  s.executables   = s.files.grep(%r{^bin/}) { |f| File.basename(f) }
  s.require_paths = ["lib"]

  # Currently, to get tab completions, we run tabry without bundler. This makes
  # it much faster, but requires it have no dependencies.

  s.add_development_dependency "pry-byebug", "~> 3.10"
  s.add_development_dependency "rspec", "~> 3.10"
  s.add_development_dependency "rubocop", "~> 1.22"
  s.add_development_dependency "rubocop-rspec", "~> 2.6"
  s.add_development_dependency "simplecov", "~> 0.12"
  s.metadata["rubygems_mfa_required"] = "true"
end
