#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Write a program to reverse a given number.
 */

int main(void) {
    long n, reverse = 0;
    if (scanf("%ld", &n) != 1) return 1;
    int negative = n < 0;
    if (negative) n = -n;
    while (n > 0) { reverse = reverse * 10 + n % 10; n /= 10; }
    printf("%s%ld\n", negative ? "-" : "", reverse);
    return 0;
}
