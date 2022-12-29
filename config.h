/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrains Mono:Medium:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
//	[SchemeNorm] = { "#bbbbbb", "#222222" },
//	[SchemeSel] = { "#eeeeee", "#005577" },
//	[SchemeOut] = { "#000000", "#00ffff" },

	// tokyo
//	[SchemeNorm] = { "#ACB0D0", "#1A1B26" },
//	[SchemeSel] = { "#1A1B26", "#56B6C2" },
//	[SchemeOut] = { "#1D2021", "#83A598" },

    // papercolor
	[SchemeNorm] = { "#D0D0D0", "#1C1C1C" },
	[SchemeSel] = { "#1C1C1C", "#5F8787" },
	[SchemeOut] = { "#1D2021", "#83A598" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
