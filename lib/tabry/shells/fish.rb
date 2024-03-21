# frozen_string_literal: true

# Used to generate a tab-completion function for a Tabry CLI using absolute
# paths to the tabry-bash script in this repo and to the Tabry JSON/YML file.
# Using uniquely-named tab-completion functions and absolute paths means you can
# have different Tabry-based CLIs using different versions of Tabry without any
# conflicts.
# See sh/bash/README.md and "Adding Tab Completion to your CLI" in main README

require "shellwords"

module Tabry
  module Shells
    module Fish
      # NOTE! This code uses sh/fish/tabry_fish.fish and is described in
      # sh/fish/README.md; see that README for more info
      def self.generate(cmd_name, tabry_file_path, uniq_fn_id: nil)
        generate_internal(
          cmd_name: cmd_name,
          import_path: File.expand_path(tabry_file_path),
          tabry_fish_executable: File.expand_path("#{path_to_tabry}/bin/tabry-fish"),
          tabry_fish_arg: nil,
          uniq_fn_id: uniq_fn_id
        )
      end

      # Generate fish completion code that will run the currently running
      # command ($0) with "completion" to get completion options. "cmd_name"
      # is used to tell fish which command to make options for
      def self.generate_self(cmd_name: nil)
        cmd_name ||= File.basename($0)
        generate_internal(
          cmd_name: cmd_name,
          import_path: "",
          tabry_fish_executable: File.expand_path($0),
          tabry_fish_arg: "completion",
        )
      end

      def self.path_to_tabry
        File.expand_path("#{__dir__}/../../../")
      end

      def self.esc(s)
        Shellwords.escape(s)
      end

      def self.add_uniq_id(str, pattern, uniq_id)
        str.gsub! pattern, "#{pattern}_#{uniq_id}"
      end

      def self.generate_internal(cmd_name:, import_path:, tabry_fish_executable:, tabry_fish_arg:, uniq_fn_id: nil)
        # uniq_fn_id is added to the bash functions to ensure they are unique
        # -- by default this is the capitalized command name
        uniq_fn_id ||= cmd_name
        uniq_fn_id = uniq_fn_id.upcase.gsub(/[^A-Z0-9_]/, "_")
        script = File.read("#{__dir__}/../../../sh/fish/tabry_fish.fish")

        add_uniq_id(script, "tabry_completion_init", uniq_fn_id)
        add_uniq_id(script, "__fish_tabry_internal_invoke", uniq_fn_id)
        add_uniq_id(script, "__fish_tabry_check_only_args", uniq_fn_id)
        add_uniq_id(script, "__fish_tabry_check_only_file", uniq_fn_id)
        add_uniq_id(script, "__fish_tabry_check_args_and_file", uniq_fn_id)
        add_uniq_id(script, "__fish_tabry_completions", uniq_fn_id)

        script.gsub! "# TABRY_IMPORT_PATH_REPLACE (DO NOT REMOVE)", "set TABRY_IMPORTS_PATH #{esc import_path}"
        script.gsub! "# TABRY_EXECUTABLE_REPLACE (DO NOT REMOVE)", "set TABRY_EXECUTABLE #{esc tabry_fish_executable}"
        if !tabry_fish_arg.nil?
          script.gsub! "# TABRY_ARG_REPLACE (DO NOT REMOVE)", "set TABRY_ARG #{esc tabry_fish_arg}"
        end

        <<~END_FISH_CODE_TEMPLATE
          # The following Autocomplete is for a Tabry-powered command. It was
          # generated by the command itself. See the documentation located in
          # #{esc path_to_tabry}/sh/fish/README.md
          #{script}
          tabry_completion_init_#{uniq_fn_id} #{esc cmd_name}
        END_FISH_CODE_TEMPLATE
      end
    end
  end
end