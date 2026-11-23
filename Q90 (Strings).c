#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Toggle case of each character in a string.
 */

int main(void) {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) {
        printf("Invalid input\n");
        return 1;
    }
    s[strcspn(s, "\r\n")] = '\0';
    for (size_t i = 0; s[i]; ++i) {
        if (isupper((unsigned char)s[i])) s[i] = (char)tolower((unsigned char)s[i]);
        else if (islower((unsigned char)s[i])) s[i] = (char)toupper((unsigned char)s[i]);
    }
    printf("%s\n", s);
    return 0;
}
