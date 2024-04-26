# frozen_string_literal: true

require "json"

module Tabry
  class OptionsFinder
    attr_reader :result, :params

    # Returns an array of options
    def self.options(result, token, params)
      new(result, params).options(token)
    end

    def initialize(result, params)
      @result = result
      @params = params
    end

    def options(token)
      # Bit of a hack: send this down to autocomplete shell commands
      # TODO: set this only in ShellOption -- would require passing state down on thru
      before_env = ENV.fetch("TABRY_AUTOCOMPLETE_STATE", nil)
      ENV["TABRY_AUTOCOMPLETE_STATE"] = {
        cmd: result.config.cmd,
        flags: result.state.flags,
        args: result.state.args,
        current_token: token,
        current_flag: result.state.current_flag
      }.to_json

      send(
        { subcommand: :options_subcommand, flagarg: :options_flagarg }[state.mode],
        token || ""
      )
      send(:"options_#{state.mode}", token || "")
    ensure
      ENV["TABRY_AUTOCOMPLETE_STATE"] = before_env
    end

    # Descriptions of what is expected; particularly, argument names and descriptions
    # returns an array, each can be one of three things:
    #   symbol :flag or :subcommand
    #   array [name, description]
    #   array [:flagarg, flag_description]
    def summary_descriptions
      send({
        subcommand: :summary_descriptions_subcommand,
        flagarg: :summary_descriptions_flagarg
      }[state.mode])
    end

    def summary_descriptions_flagarg
      result.current_flags_for_flagargs.map do |flag|
        [:flagarg, flag.description]
      end.compact
    end

    def summary_descriptions_subcommand
      descriptions = []
      if result.expected_arg
        descriptions << [
          result.expected_arg.title || result.expected_arg.name,
          result.expected_arg.description
        ]
      end
      descriptions << :subcommand if options_subcommand_subs(nil).any?
      descriptions << :flag if options_subcommand_flags(nil).any?
      descriptions
    end

    private

    def state
      result.state
    end

    def current_sub
      @current_sub ||= result.current_sub
    end

    def options_subcommand(token)
      if token.to_s == ""
        result.sub_stack.each do |sub|
          required_flag = sub.flags.first_required_flag(used: state.flags)
          if required_flag
            return [required_flag.name_with_dashes]
          end
        end
      end

      options_subcommand_subs(token) |
        options_subcommand_flags(token) |
        options_subcommand_args(token)
    end

    def options_flagarg(token)
      result.current_flags_for_flagargs.map do |flag|
        flag.options&.options(token, params)
      end.compact.flatten.uniq
    end

    def options_subcommand_subs(token)
      if state.args.any?
        # once an arg has been given, can no longer use a subcommand
        []
      else
        current_sub.subs.options(token, params)
      end
    end

    def options_subcommand_flags(token)
      return [] if state.dashdash

      result
        .sub_stack
        .map { |sub| sub.flags.options(token, params, used: state.flags) }
        .flatten(1)
        .uniq
    end

    def options_subcommand_args(token)
      result.expected_arg&.options&.options(token, params) || []
    end
  end
end
