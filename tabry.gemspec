# TODO these 2 lines are cargo cult
lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)

Gem::Specification.new do |s|
  s.name        = 'tabry'
  s.version     = '0.0.2'
  s.summary     = "Tab completion and CLIs extraordinaire"
  s.authors     = ["Evan Battaglia"]
  s.email       = 'battaglia.evan@gmail.com'
  s.files       = ["lib/tabry/runner.rb", "lib/tabry/cli/builder.rb"]
  s.homepage    = 'https://github.com/evanbattaglia/tabry'

  # TODO more cargo cult possibly
  s.files         = Dir.glob("{lib,spec}/**/*") + %w(Rakefile test.sh)
  s.executables   = s.files.grep(%r{^bin/}) { |f| File.basename(f) }
  s.test_files    = s.files.grep(%r{^(test|spec|features)/})
  s.require_paths = ["lib"]

  s.add_development_dependency "rspec", "~> 3.10"
end
