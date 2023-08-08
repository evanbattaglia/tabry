# frozen_string_literal: true

ENV["RAILS_ENV"] ||= "test"

require "simplecov"
SimpleCov.start do
  add_filter "spec"
  track_files "lib/**/*.rb"
end
SimpleCov.minimum_coverage(83)
