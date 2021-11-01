require 'shellwords'

# Utils that may be useful to CLIs
module Tabry
  module CLI
    module Util
      module_function
      def system(cmdline, *args, echo: false)
        args = Array(args).flatten
        cmdline = cmdline % args.map{|a| Shellwords.escape(a)}
        puts cmdline if echo
        Kernel.system cmdline
      end
    end
  end
end
