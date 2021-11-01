require 'shellwords'

module Tabry
  module CLI
    class Passback
      # These exit codes are used for passback
      MIN_EXIT_CODE = 20
      MAX_EXIT_CODE = 120

      def self.successful_exit_with_passback(cmdname, env)
        new(cmdname, env).successful_exit
      end

      attr_reader :env, :cmdname

      def initialize(cmdname, env)
        @cmdname = cmdname
        @env = env
      end

      def passback_enabled?
        homedir && ENV["TABRY_LOGIN_PASSBACK_CMDNAME"] == cmdname && cmdname =~ /^[A-Za-z0-9_.-]+$/
      end

      def homedir
        ENV['HOME']
      end

      def filename_for_number(n)
        File.join(ENV['HOME'], ".tmp_tabry_passback_#{cmdname}_#{n.to_s}")
      end

      # Returns false if the file already exists
      def write_to_numbered_file(number)
        File.open(filename_for_number(number), File::WRONLY|File::CREAT|File::EXCL) do |file|
          write_to_file(file)
          return true
        end
      rescue Errno::EEXIST
        false
      end

      def write_to_unused_file
        (MIN_EXIT_CODE..MAX_EXIT_CODE).find do |number|
          write_to_numbered_file(number)
        end
      end

      def successful_exit
        exit 0 unless passback_enabled?
        file_number = write_to_unused_file
        exit(file_number || 0)
      end

      def write_to_file(file)
        env.each do |key, val|
          raise "Passback: invalid env name #{key.inspect}" unless key =~ /^[a-zA-Z_][a-zA-Z_0-9]*$/
          file.puts "export #{key}=#{Shellwords.escape val}"
        end
      end
    end
  end
end
