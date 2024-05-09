/*	$OpenBSD: match.c,v 1.25 2023/04/21 13:39:37 op Exp $	*/

/* This file is in the public domain. */

/*
 *	Limited parenthesis matching routines
 *
 * The hacks in this file implement automatic matching * of (), [], {}, and
 * other characters.  It would be better to have a full-blown syntax table,
 * but there's enough overhead in the editor as it is.
 */

#include <signal.h>
#include <stdio.h>

#include "def.h"
#include "key.h"



/*
 * Hack to show matching paren.  Self-insert character, then show matching
 * character, if any.  Bound to "blink-and-insert".  Used in the mg startup
 * file to amend the default cursor behaviour of a key press, e.g:
 *   global-set-key "%" blink-and-insert
 */
int
showmatch(int f, int n)
{
	int	i, s;

	for (i = 0; i < n; i++) {
		if ((s = selfinsert(FFRAND, 1)) != TRUE)
			return (s);
	}
	return (TRUE);
}

