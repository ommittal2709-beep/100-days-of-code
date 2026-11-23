#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Print each character of a string on a new line.
 */

int main(void) {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) {
        printf("Invalid input\n");
        return 1;
    }
    s[strcspn(s, "\r\n")] = '\0';
    for (size_t i = 0; s[i] != '\0'; ++i) printf("%c\n", s[i]);
    return 0;
}
