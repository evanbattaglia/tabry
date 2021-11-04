require 'shellwords'

# Utils that may be useful to CLIs
module Tabry
  module CLI
    module Util
      module_function
      def make_cmdline(cmdline, *args, echo: false, echo_only: false)
        args = Array(args).flatten
        cmdline = cmdline % args.map{|a| Shellwords.escape(a)}
        STDERR.puts cmdline if echo || echo_only
        return nil if echo_only
        cmdline
      end

      def system(*cmdline, **opts)
        cmdline = make_cmdline(*cmdline, **opts)
        Kernel.system cmdline if cmdline
      end

      # TODO would be nice to get separate STDERR and STDOUT
      def backtick_or_die(*cmdline, **opts)
        cmdline = make_cmdline(*cmdline, **opts)
        return unless cmdline
        res = `#{cmdline}`
        if !$?.success?
          STDERR.puts "COMMAND FAILED with exit code #{$?.exitstatus}: #{cmdline}"
          exit 1
        end
        res
      end

      def open_web_page(url)
        command = RUBY_PLATFORM.include?('linux') ? 'xdg-open' : 'open'
        system "%s %s", command, url
      end
    end
  end
end
