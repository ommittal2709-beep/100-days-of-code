#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Write a program to check if a number is a palindrome.
 */

int main(void) {
    unsigned long n, original, reverse = 0;
    if (scanf("%lu", &n) != 1) return 1;
    original = n;
    while (n > 0) { reverse = reverse * 10 + n % 10; n /= 10; }
    printf("%s\n", original == reverse ? "Palindrome" : "Not palindrome");
    return 0;
}
