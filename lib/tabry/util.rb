module Tabry
  module Util
    module_function

    def debug(msg)
      STDERR.puts msg if debug?
    end

    def debug?
      !ENV['TABRY_DEBUG'].to_s.empty?
    end
  end
end
