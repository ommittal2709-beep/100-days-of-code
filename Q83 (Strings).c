#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Count vowels and consonants in a string.
 */

int main(void) {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) {
        printf("Invalid input\n");
        return 1;
    }
    s[strcspn(s, "\r\n")] = '\0';
    int vowels = 0, consonants = 0;
    for (size_t i = 0; s[i] != '\0'; ++i) {
        char c = (char)tolower((unsigned char)s[i]);
        if (isalpha((unsigned char)c)) {
            if (strchr("aeiou", c)) ++vowels;
            else ++consonants;
        }
    }
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}
