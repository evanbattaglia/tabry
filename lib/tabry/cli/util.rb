require 'shellwords'

# Utils that may be useful to CLIs
module Tabry
  module CLI
    module Util
      module_function
      def make_cmdline(cmdline, *args, echo: false)
        args = Array(args).flatten
        cmdline = cmdline % args.map{|a| Shellwords.escape(a)}
        STDERR.puts cmdline if echo
        cmdline
      end

      def system(*cmdline, echo: false, echo_only: false, **opts)
        cmdline = make_cmdline(*cmdline, **opts, echo: echo || echo_only)
        Kernel.system cmdline unless echo_only
      end

      # TODO would be nice to get separate STDERR and STDOUT
      def backtick_or_die(*cmdline, **opts)
        cmdline = make_cmdline(*cmdline, **opts)
        res = `#{cmdline}`
        if !$?.success?
          STDERR.puts "COMMAND FAILED with exit code #{$?.exitstatus}: #{cmdline}"
          exit 1
        end
        res
      end
    end
  end
end
