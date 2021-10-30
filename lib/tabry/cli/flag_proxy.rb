module Tabry
  module CLI
    class FlagProxy
      def initialize(hash)
        @hash = hash
      end

      def [](key)
        key = key.to_s
        [
          key,
          key.gsub("_", "-")
        ].each do |hash_key|
          val = @hash[hash_key]
          return val if val
        end
        nil
      end

      def method_missing(met, default=nil, *args)
        self[met] || default
      end

      def respond_to?(met, p2)
        super(met, p2) || (!p2 && self[met])
      end

      def inspect
        "FlagProxy: #{@hash.inspect}"
      end

      def to_s
        "FlagProxy: #{@hash.to_s}"
      end
    end
  end
end

