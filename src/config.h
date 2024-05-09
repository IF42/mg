/* src/config.h.  Generated from config.h.in by configure.  */
/* src/config.h.in.  Generated from configure.ac by autoheader.  */

/* Enable Cscope programming tool */
#define CSCOPE 1

/* Enable auto-exec support */
#define ENABLE_AUTOEXEC 1

/* Enable C programming mode, OpenBSD KNF */
#define ENABLE_CMODE 1

/* Enable C compile mode, M-x compile */
#define ENABLE_COMPILE_GREP 1

/* Enable ctags(1) support */
#define ENABLE_CTAGS 1

/* Enable dired, the directory editor */
#define ENABLE_DIRED 1

/* Define to 1 if you have the 'fparseln' function. */
/* #undef HAVE_FPARSELN */

/* Define to 1 if you have the 'futimens' function. */
#define HAVE_FUTIMENS 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the 'curses' library (-lcurses). */
/* #undef HAVE_LIBCURSES */

/* Define to 1 if you have the 'ncurses' library (-lncurses). */
/* #undef HAVE_LIBNCURSES */

/* Define to 1 if you have the 'termcap' library (-ltermcap). */
/* #undef HAVE_LIBTERMCAP */

/* Define to 1 if you have the 'tinfo' library (-ltinfo). */
/* #undef HAVE_LIBTINFO */

/* Define to 1 if you have the 'util' library (-lutil). */
#define HAVE_LIBUTIL 1

/* Define to 1 if you have the 'login_tty' function. */
#define HAVE_LOGIN_TTY 1

/* Define to 1 if you have the <ncurses/curses.h> header file. */
/* #undef HAVE_NCURSES_CURSES_H */

/* Define to 1 if you have the 'openpty' function. */
#define HAVE_OPENPTY 1

/* Define to 1 if you have the <pty.h> header file. */
#define HAVE_PTY_H 1

/* Define to 1 if you have the 'reallocarray' function. */
#define HAVE_REALLOCARRAY 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the 'strlcat' function. */
#define HAVE_STRLCAT 1

/* Define to 1 if you have the 'strlcpy' function. */
#define HAVE_STRLCPY 1

/* Define to 1 if you have the 'strtonum' function. */
/* #undef HAVE_STRTONUM */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <term.h> header file. */
/* #undef HAVE_TERM_H */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <utmp.h> header file. */
#define HAVE_UTMP_H 1

/* Debug logging of mg internals */
/* #undef MGLOG */

/* Name of package */
#define PACKAGE "mg"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://github.com/troglobit/mg/issues"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Mg"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Mg 3.7"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "mg"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.7"

/* Enable regexp search support */
#define REGEX 1

/* Init file to run if ~/.mg is missing */
#define STARTUPFILE "${prefix}/etc/mg"

/* Define to 1 if all of the C89 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Enable extreme size optimizations */
/* #undef TINY */

/* Enable toggle-newline-prompt support */
#define TOGGLENL 1

/* Version number of package */
#define VERSION "3.7"

/* Set when built without curses/ncurses */
#define WITHOUT_CURSES 1
