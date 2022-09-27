# frozen_string_literal: true

class GenericBuilder
  attr_reader :_opts

  private_class_method :new
  def self.build(opts = {}, *args, &blk)
    builder = new(opts, *args)
    builder.instance_eval(&blk) if blk
    builder._obj.compact
  end

  # Should be used instead of MyBuilder.build to pass in opts
  def _build(builder, *args, &blk)
    builder.build(_opts, *args, &blk)
  end

  def _obj
    @_obj ||= {}
  end

  def _append(list_name, *value_or_values)
    _obj[list_name.to_s] ||= []
    _obj[list_name.to_s].concat([value_or_values].flatten)
    value_or_values
  end

  def _set_hash(hash_name, key, value)
    _obj[hash_name.to_s] ||= {}
    _obj[hash_name.to_s][key.to_s] = value
  end

  def _set(key, val)
    val = val.chomp if val.is_a?(String)
    val = val.to_s if val.is_a?(Symbol)
    if _opts[:names_underscores_to_dashes] && key.to_s == "name"
      val = val.gsub("_", "-") if val.is_a?(String)
      val = val.map { |name| name.to_s.gsub("_", "-") } if val.is_a?(Array)
    end
    _obj[key.to_s] = val
  end

  def initialize(opts, *args)
    @_opts = opts
    includes, not_includes = args.partition { |arg| (arg.is_a?(Symbol) || arg.is_a?(String)) && arg.to_s.start_with?("@") }
    includes.each { |arg| include(arg) }
    _init(*not_includes) if defined?(:_init)
  end

  def self.simple_setter(name, key = nil)
    define_method name do |value|
      value = value.chomp if value.is_a?(String)
      _set (key || name), value
    end
  end

  def self.builder_appender(name, key, builder, merge: {})
    define_method name.to_sym do |*args, &blk|
      value = _build(builder, *args, &blk).merge(merge.transform_keys(&:to_s))
      _append key, value
    end
  end

  def include(inc)
    inc_str = inc.to_s
    raise "include must be a start with @" unless inc_str.start_with?("@")

    include_name = inc_str[1..]
    if _opts[:names_underscores_to_dashes]
      include_name = include_name.gsub("_", "-")
    end

    _include include_name
  end

  def _include(_inc)
    raise "_include not implemented for #{self.class}"
  end

  def _augment_list_item(list_name, item)
    item = _obj[list_name].find { |i| i.equal?(item) }
    yield item
    item
  end

  def self.init_setters(*setters, split_name_to_aliases: false)
    define_method :_init do |*args|
      args.zip(setters) do |arg, setter|
        _set setter, arg
        _split_name_to_aliases if split_name_to_aliases
      end
    end
  end

  def _split_name_to_aliases
    name = _obj["name"]
    if name
      name = name.split(/[ ,]{1,2}/) unless name.is_a?(Array)
      _obj["name"], *aliases = name
      aliases.each { |a| _append :aliases, a }
    end
  end
end
