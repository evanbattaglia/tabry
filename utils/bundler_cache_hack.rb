#!/usr/bin/env ruby
# frozen_string_literal: true

# This is useful helper for speeding up your CLIs by caching the paths bundler.
# To use, copy to the same directory your Gemfile is in, and require_relative
# the file from your CLI script.
# Example:
#
# #!/usr/bin/env -S ruby --disable-gems
# require_relative '../bundler_cache_hack'
# require 'tabry/cli/builder'
# require_relative '../lib/mycli/cli.rb'
# Tabry::CLI::Builder.new("#{__dir__}/../tabry/mycli.json", MyCLI::CLI).run(ARGV)
#

# Ideally you should run ruby with "--disable-gems" and then require_relative this file.
# Not including gems cuts off somewhere around 20-40 ms on my computer.
module BundlerCacheHack
  module_function

  # rubygems will override require with something that looks at install gems.
  # Not needed if you run ruby with --disable-gems (but I'm not sure how to tell
  # if that is the case, and it's quick enough to include this module again)
  module OverrideRubyGemsRequire
    def require(*args)
      Kernel.require(*args)
    end
  end

  BUNDLE_CACHE_FILE = "#{__dir__}/bundler_cache_hack.cache"
  BUNDLER_FILE = "#{__dir__}/Gemfile"
  BUNDLER_LOCK_FILE = "#{__dir__}/Gemfile.lock"

  def compile_bundle_hack_file
    bundler_setup!
    File.write(BUNDLE_CACHE_FILE, $LOAD_PATH.join("\n"))
  end

  def bundler_setup!
    require "rubygems"
    ENV["BUNDLE_GEMFILE"] = BUNDLER_FILE
    require "bundler/setup"
  end

  def bundle!
    if ENV["BUNDLERCACHEHACK_ALWAYS_USE_BUNDLER"]
      bundler_setup!
    elsif File.exist?(BUNDLE_CACHE_FILE) &&
          File.mtime(BUNDLE_CACHE_FILE) > File.mtime(BUNDLER_FILE) &&
          File.mtime(BUNDLE_CACHE_FILE) > File.mtime(BUNDLER_LOCK_FILE)
      $LOAD_PATH.clear
      $LOAD_PATH.concat File.read(BUNDLE_CACHE_FILE).chomp.split("\n")
    else
      compile_bundle_hack_file
    end
  end

  def install!
    success = Dir.chdir(__dir__) { system "bundle install" }
    if success
      FileUtils.rm_f(BUNDLE_CACHE_FILE)
      BundlerCacheHack.compile_bundle_hack_file
      exit 0
    else
      warn "Bundle failed!"
      exit 1
    end
  end
end

if __FILE__ == $0 && ARGV == ["install"]
  BundlerCacheHack.install!
else
  BundlerCacheHack.bundle!
  include BundlerCacheHack::OverrideRubyGemsRequire # rubocop:disable Style/MixinUsage
end
