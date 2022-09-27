require_relative 'arg_or_flag_builder'
require_relative 'flagarg_builder'
require_relative 'generic_builder'
require_relative 'sub_builder'

module Tabry
  module ConfigBuilder
    class SubBuilder < GenericBuilder
      init_setters :name, :description, split_name_to_aliases: true
      simple_setter :desc, :description
      builder_appender :arg, :args, ArgOrFlagBuilder
      builder_appender :opt_arg, :args, ArgOrFlagBuilder, merge: {optional: true}
      builder_appender :varargs, :args, ArgOrFlagBuilder, merge: {varargs: true}
      builder_appender :opt_varargs, :args, ArgOrFlagBuilder, merge: {optional: true, varargs: true}
      builder_appender :sub, :subs, SubBuilder
      builder_appender :flag, :flags, ArgOrFlagBuilder
      builder_appender :flagarg, :flags, FlagargBuilder

      def _include(inc)
        %i[args flags subs].each do |thing_type|
          _append(thing_type, {'include' => inc})
        end
      end
    end
  end
end
