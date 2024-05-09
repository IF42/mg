#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>


int main(void) {
	char diacritics[] = {0xC5, 0x99, '\n'}; // UTF-8 kód českého znaku "ř" (0xC5 0x99) a nový řádek
    size_t len = sizeof(diacritics); // Délka pole diakritics

    // Zápis diakritiky na stdout
    if (write(STDOUT_FILENO, diacritics, len) != len) {
        perror("write");
        return 1;
    }

    return EXIT_SUCCESS;
}
