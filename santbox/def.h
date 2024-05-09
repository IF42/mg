#ifndef _DEF_H_
#define _DEF_H_


/*
 * Universal.
 */
#define FALSE	0		/* False, no, bad, etc.		 */
#define TRUE	1		/* True, yes, good, etc.	 */
#define ABORT	2		/* Death, ^G, abort, etc.	 */
#define UERROR	3		/* User Error.			 */
#define REVERT	4		/* Revert the buffer		 */


extern int		 batch;


/* echo.c X */
int		 helptoggle(int, int);
void		 eerase(void);
int		 eyorn(const char *);
int		 eynorr(const char *);
int		 eyesno(const char *);
void		 ewprintf(const char *fmt, ...);
char		*eread(const char *, char *, size_t, int, ...)
				__attribute__((__format__ (printf, 1, 5)));
int		 getxtra(struct list *, struct list *, int, int);
void		 free_file_list(struct list *);


extern volatile sig_atomic_t winch_flag;

/* ttyio.c */
void		 panic(char *);


/* bell.c */
void		 bellinit(void);
int		 toggleaudiblebell(int, int);
int		 togglevisiblebell(int, int);
int		 dobeep_num(const char *, int);
int		 dobeep_msgs(const char *, const char *);
int		 dobeep_msg(const char *);
void		 dobeep(void);


/* tty.c X */
void		 ttinit(void);
void		 ttreinit(void);
void		 tttidy(void);
void		 ttmove(int, int);
void		 tteeol(void);
void		 tteeop(void);
void		 ttbeep(void);
void		 ttinsl(int, int, int);
void		 ttdell(int, int, int);
void		 ttwindow(int, int);
void		 ttnowindow(void);
void		 ttcolor(int);
void		 ttresize(void);


/* ttyio.c */
void		 ttopen(void);
int		 ttraw(void);
void		 ttclose(void);
int		 ttcooked(void);
int		 ttputc(int);
void		 ttflush(void);
int		 ttgetc(void);
int		 ttwait(int);
int		 charswaiting(void);

#endif
