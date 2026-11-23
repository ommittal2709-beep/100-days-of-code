#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Check if a string is a palindrome.
 */

int main(void) {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) {
        printf("Invalid input\n");
        return 1;
    }
    s[strcspn(s, "\r\n")] = '\0';
    size_t left = 0, right = strlen(s);
    if (right > 0) --right;
    while (left < right && s[left] == s[right]) { ++left; --right; }
    printf("%s\n", left >= right ? "Palindrome" : "Not palindrome");
    return 0;
}
