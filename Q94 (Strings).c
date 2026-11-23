#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Find the longest word in a sentence.
 */

int main(void) {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) {
        printf("Invalid input\n");
        return 1;
    }
    s[strcspn(s, "\r\n")] = '\0';
    char longest[1000] = "";
    char *word = strtok(s, " ");
    while (word != NULL) {
        if (strlen(word) > strlen(longest)) strcpy(longest, word);
        word = strtok(NULL, " ");
    }
    printf("%s\n", longest);
    return 0;
}
