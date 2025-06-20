# frozen_string_literal: true

require "shellwords"

# Utils that may be useful to CLIs
module Tabry
  module CLI
    module Util
      module_function

      SHELL_FOR_WINDOWS = ["bash", "-c"]

      def make_cmdline(cmdline, *args, echo: false, echo_only: false, merge_stderr: false)
        # Allow to pass in an array, or varargs:
        args = args.first if args.length == 1 && args.first.is_a?(Array)

        args = args.map do |arg|
          if arg.is_a?(Array)
            # array of arguments get escaped separately and joined with strings (see specs)
            arg.map { |a| Shellwords.escape(a) }.join(" ")
          else
            Shellwords.escape(arg)
          end
        end
        cmdline %= args
        cmdline = "{ #{cmdline} ;} 2>&1" if merge_stderr

        warn cmdline if echo || echo_only
        return nil if echo_only

        cmdline
      end

      def system(*cmdline, **opts)
        cmdline = make_cmdline(*cmdline, **opts)
        return unless cmdline

        require 'rubygems'

        if Gem.win_platform?
          Kernel.system *SHELL_FOR_WINDOWS, cmdline
        else
          Kernel.system cmdline
        end
      end

      # TODO: would be nice to get separate STDERR and STDOUT
      def backtick_or_die(*cmdline, **opts)
        backtick_with_status(*cmdline, valid_statuses: [0], **opts).first
      end

      def backtick_with_status(*cmdline, valid_statuses: nil, extra_error_message: nil, **opts)
        cmdline = make_cmdline(*cmdline, **opts)
        return [nil, nil] unless cmdline

        require 'rubygems'

        enoent_error = false
        begin
          res = if Gem.win_platform?
            IO.popen([*SHELL_FOR_WINDOWS, cmdline]) { |io| io.read }
          else
            `#{cmdline}`
          end
        rescue Errno::ENOENT
          enoent_error = true
        end

        status = $?
        if valid_statuses && !valid_statuses.include?(status.exitstatus)
          msg = "COMMAND FAILED with exit code #{status.exitstatus}"
          msg += " (command does not exist)" if enoent_error
          Kernel.warn "#{msg}: #{cmdline}"
          Kernel.warn "Command output:\n#{res}"
          Kernel.warn extra_error_message if extra_error_message
          Kernel.exit 1
        end
        [res, status]
      end

      def open_command
        RUBY_PLATFORM.include?("linux") ? "xdg-open" : "open"
      end

      def open_web_page(url_or_urls)
        unless system("nohup %s %s 2>&1 >/dev/null &", open_command, url_or_urls)
          warn "WARNING: opening web page failed: #{make_cmdline("%s %s", open_command, url)}"
        end
      end
    end
  end
end
