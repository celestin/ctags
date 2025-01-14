/*
 * Generated by ./misc/optlib2c from optlib/meson.ctags, Don't edit this manually.
 */
#include "general.h"
#include "parse.h"
#include "routines.h"
#include "field.h"
#include "xtag.h"


static void initializeMesonParser (const langType language)
{

	addLanguageRegexTable (language, "main");
	addLanguageRegexTable (language, "mline_string");
	addLanguageRegexTable (language, "string");
	addLanguageRegexTable (language, "comment");
	addLanguageRegexTable (language, "skipPair");
	addLanguageRegexTable (language, "common");
	addLanguageRegexTable (language, "skipToArgEnd");

	addLanguageTagMultiTableRegex (language, "main",
	                               "^[ \t\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^#",
	                               "", "", "{tenter=comment}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^'''",
	                               "", "", "{tenter=mline_string}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^'",
	                               "", "", "{tenter=string}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^[[({]",
	                               "", "", "{tenter=skipPair}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^(jar|executable|shared_module|(both_|shared_|static_)?library)[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\3", "B", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^custom_target[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\1", "c", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^(alias|run)_target[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\2", "r", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^bench_mark[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\1", "b", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^import[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\1", "m", "{tenter=skipToArgEnd}{_role=imported}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^project[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\1", "P", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^subdir[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\1", "S", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^test[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\1", "t", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^([a-zA-Z_][a-zA-Z_0-9]*)[ \t\n]*=[ \t\n]*",
	                               "\\1", "V", "", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^.",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "mline_string",
	                               "^'''",
	                               "", "", "{tleave}", NULL);
	addLanguageTagMultiTableRegex (language, "mline_string",
	                               "^[^']+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "mline_string",
	                               "^.",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "string",
	                               "^\\\\'",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "string",
	                               "^[^\\\\']+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "string",
	                               "^'",
	                               "", "", "{tleave}", NULL);
	addLanguageTagMultiTableRegex (language, "comment",
	                               "^[^\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "comment",
	                               "^\n",
	                               "", "", "{tleave}", NULL);
	addLanguageTagMultiTableRegex (language, "skipPair",
	                               "^[ \t\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "skipPair",
	                               "^#",
	                               "", "", "{tenter=comment}", NULL);
	addLanguageTagMultiTableRegex (language, "skipPair",
	                               "^'''",
	                               "", "", "{tenter=mline_string}", NULL);
	addLanguageTagMultiTableRegex (language, "skipPair",
	                               "^'",
	                               "", "", "{tenter=string}", NULL);
	addLanguageTagMultiTableRegex (language, "skipPair",
	                               "^[[({]",
	                               "", "", "{tenter=skipPair}", NULL);
	addLanguageTagMultiTableRegex (language, "skipPair",
	                               "^(jar|executable|shared_module|(both_|shared_|static_)?library)[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\3", "B", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "skipPair",
	                               "^custom_target[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\1", "c", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "skipPair",
	                               "^(alias|run)_target[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\2", "r", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "skipPair",
	                               "^bench_mark[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\1", "b", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "skipPair",
	                               "^import[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\1", "m", "{tenter=skipToArgEnd}{_role=imported}", NULL);
	addLanguageTagMultiTableRegex (language, "skipPair",
	                               "^[])}]",
	                               "", "", "{tleave}", NULL);
	addLanguageTagMultiTableRegex (language, "skipPair",
	                               "^.",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "common",
	                               "^[ \t\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "common",
	                               "^#",
	                               "", "", "{tenter=comment}", NULL);
	addLanguageTagMultiTableRegex (language, "common",
	                               "^'''",
	                               "", "", "{tenter=mline_string}", NULL);
	addLanguageTagMultiTableRegex (language, "common",
	                               "^'",
	                               "", "", "{tenter=string}", NULL);
	addLanguageTagMultiTableRegex (language, "common",
	                               "^[[({]",
	                               "", "", "{tenter=skipPair}", NULL);
	addLanguageTagMultiTableRegex (language, "common",
	                               "^(jar|executable|shared_module|(both_|shared_|static_)?library)[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\3", "B", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "common",
	                               "^custom_target[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\1", "c", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "common",
	                               "^(alias|run)_target[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\2", "r", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "common",
	                               "^bench_mark[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\1", "b", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "common",
	                               "^import[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\1", "m", "{tenter=skipToArgEnd}{_role=imported}", NULL);
	addLanguageTagMultiTableRegex (language, "skipToArgEnd",
	                               "^[ \t\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "skipToArgEnd",
	                               "^#",
	                               "", "", "{tenter=comment}", NULL);
	addLanguageTagMultiTableRegex (language, "skipToArgEnd",
	                               "^'''",
	                               "", "", "{tenter=mline_string}", NULL);
	addLanguageTagMultiTableRegex (language, "skipToArgEnd",
	                               "^'",
	                               "", "", "{tenter=string}", NULL);
	addLanguageTagMultiTableRegex (language, "skipToArgEnd",
	                               "^[[({]",
	                               "", "", "{tenter=skipPair}", NULL);
	addLanguageTagMultiTableRegex (language, "skipToArgEnd",
	                               "^(jar|executable|shared_module|(both_|shared_|static_)?library)[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\3", "B", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "skipToArgEnd",
	                               "^custom_target[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\1", "c", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "skipToArgEnd",
	                               "^(alias|run)_target[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\2", "r", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "skipToArgEnd",
	                               "^bench_mark[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\1", "b", "{tenter=skipToArgEnd}", NULL);
	addLanguageTagMultiTableRegex (language, "skipToArgEnd",
	                               "^import[ \t\n]*\\([ \t\n]*'([^']*[^\\\\])'[ \t\n]*",
	                               "\\1", "m", "{tenter=skipToArgEnd}{_role=imported}", NULL);
	addLanguageTagMultiTableRegex (language, "skipToArgEnd",
	                               "^[])}]",
	                               "", "", "{tleave}", NULL);
	addLanguageTagMultiTableRegex (language, "skipToArgEnd",
	                               "^.",
	                               "", "", "", NULL);
}

extern parserDefinition* MesonParser (void)
{
	static const char *const extensions [] = {
		NULL
	};

	static const char *const aliases [] = {
		NULL
	};

	static const char *const patterns [] = {
		"meson.build",
		NULL
	};

	static roleDefinition MesonModuleRoleTable [] = {
		{ true, "imported", "imported" },
	};
	static kindDefinition MesonKindTable [] = {
		{
		  true, 'P', "project", "projects",
		},
		{
		  true, 'V', "variable", "variables",
		},
		{
		  true, 'S', "subdir", "subdirs",
		},
		{
		  true, 'B', "build", "build targets",
		},
		{
		  true, 'c', "custom", "custom targets",
		},
		{
		  true, 't', "test", "tests",
		},
		{
		  true, 'b', "benchmark", "benchmark targets",
		},
		{
		  true, 'r', "run", "run targets",
		},
		{
		  true, 'm', "module", "modules",
		  ATTACH_ROLES(MesonModuleRoleTable),
		},
	};

	parserDefinition* const def = parserNew ("Meson");

	def->enabled       = true;
	def->extensions    = extensions;
	def->patterns      = patterns;
	def->aliases       = aliases;
	def->method        = METHOD_NOT_CRAFTED|METHOD_REGEX;
	def->kindTable     = MesonKindTable;
	def->kindCount     = ARRAY_SIZE(MesonKindTable);
	def->initialize    = initializeMesonParser;

	return def;
}
