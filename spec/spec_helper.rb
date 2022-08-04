# frozen_string_literal: true

# This file is copied to spec/ when you run 'rails generate rspec:install'
ENV['RAILS_ENV'] ||= 'test'

require 'simplecov'
SimpleCov.start do
  add_filter 'spec'
  track_files 'lib/**/*.rb'
end
SimpleCov.minimum_coverage(80)

Dir[Rails.root.join('./support/**/*.rb')].sort.each { |f| require f }
