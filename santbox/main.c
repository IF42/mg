#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stddef.h>
#include <unistd.h>


#define FALSE	0		/* False, no, bad, etc.		 */
#define TRUE	1		/* True, yes, good, etc.	 */


int		 batch;
#define NOBUF	512			/* Output buffer size. */
#define NKNAME	20		/* Length, key names.		 */

#define CNONE	0		/* Unknown color.		 */
#define CTEXT	1		/* Text color.			 */
#define CMODE	2		/* Mode line color.		 */

char	obuf[NOBUF];			/* Output buffer. */
size_t	nobuf;				/* Buffer count. */


void ttflush(void);

int
ttputc(int c)
{
	if (nobuf >= NOBUF) {
		ttflush();
    }

	obuf[nobuf++] = c;
	return (c);
}


void ttflush(void) {
	ssize_t	 written;
	char	*buf = obuf;

	if (nobuf == 0 || batch == 1) {
		return;
    }

	while ((written = write(fileno(stdout), buf, nobuf)) != (ssize_t)nobuf) {
		if (written == -1) {
			if (errno == EINTR) {
				continue;
            }

			puts("ttflush write failed");
		}

		buf += written;
		nobuf -= (size_t)written;
	}

	nobuf = 0;
}



int main(void) {
    if(ttprint("hellořřř\n") <= 0) {
        printf("zero written\n");
    }
    ttflush();


    printf("Program exit..\n");
    return EXIT_SUCCESS;
}
