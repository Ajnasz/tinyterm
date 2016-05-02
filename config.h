/*
 * MIT/X Consortium License
 *
 * © 2015 Nathan Hoad
 * © 2013 Jakub Klinkovský
 * © 2009 Sebastian Linke
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

/* Terminal emulation (value of $TERM) (default: xterm) */
#define TINYTERM_TERMINFO       "xterm-256color"

#define TINYTERM_DYNAMIC_WINDOW_TITLE   // uncomment to enable window_title_cb
#define TINYTERM_URGENT_ON_BELL         // uncomment to enable window_urgency_hint_cb
#define TINYTERM_SCROLLBACK_LINES   10000
#define TINYTERM_SEARCH_WRAP_AROUND TRUE
#define TINYTERM_AUDIBLE_BELL   FALSE
#define TINYTERM_VISIBLE_BELL   FALSE
#define TINYTERM_FONT           "Envy Code R 12"
#define TINYTERM_STYLE "GtkWindow { background: black; }"

#include "config_colors.h"
/* One of VTE_CURSOR_SHAPE_BLOCK, VTE_CURSOR_SHAPE_IBEAM, VTE_CURSOR_SHAPE_UNDERLINE */
#define TINYTERM_CURSOR_SHAPE   VTE_CURSOR_SHAPE_BLOCK

/* One of VTE_CURSOR_BLINK_SYSTEM, VTE_CURSOR_BLINK_ON, VTE_CURSOR_BLINK_OFF */
#define TINYTERM_CURSOR_BLINK   VTE_CURSOR_BLINK_OFF

/* Selection behavior for double-clicks */
#define TINYTERM_WORD_CHARS "-A-Za-z0-9:./?%&#_=+@~"

/* Keyboard shortcuts */
#define TINYTERM_MODIFIER       GDK_CONTROL_MASK
#define TINYTERM_KEY_FONTSIZE_INCREASE       GDK_KEY_Up
#define TINYTERM_KEY_FONTSIZE_DECREASE       GDK_KEY_Down

/* Regular expression matching urls */
#define SPECIAL_CHARS   "[[:alnum:]\\Q+-_,?;.:/!%$^*&~#=()\\E]"
#define SCHEME          "(?:[[:alpha:]][+-.[:alpha:]]*://)"
#define USERINFO        "(?:[[:alnum:]]+(?:" SPECIAL_CHARS "+)?\\@)?"
#define HOST            "(?:(?:[[:alnum:]-]+\\.)*[[:alpha:]]{2,})"
#define PORT            "(?:\\:[[:digit:]]{1,5})?"
#define URLPATH         "(?:/" SPECIAL_CHARS "*)?"

const char * const url_regex = SCHEME USERINFO HOST PORT URLPATH "(?<!\\.)";
