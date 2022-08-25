# frozen_string_literal: true

# TODO: these 2 lines are cargo cult
lib = File.expand_path("lib", __dir__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)

Gem::Specification.new do |s|
  s.name        = "tabry"
  s.version     = "0.1.1"
  s.summary     = "Tab completion and CLIs extraordinaire"
  s.authors     = ["Evan Battaglia"]
  s.email       = "battaglia.evan@gmail.com"
  s.homepage    = "https://github.com/evanbattaglia/tabry"
  s.license     = "MIT"

  s.files         = Dir.glob("{lib,bin,sh,spec}/**/*") + %w[tabry.gemspec]
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
