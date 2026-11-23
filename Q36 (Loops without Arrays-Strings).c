#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Write a program to find the HCF (GCD) of two numbers.
 */

int main(void) {
    long a, b;
    if (scanf("%ld %ld", &a, &b) != 2 || a <= 0 || b <= 0) return 1;
    long x = a, y = b;
    while (y != 0) { long t = y; y = x % y; x = t; }
    printf("%ld\n", 36 == 36 ? x : (a / x) * b);
    return 0;
}
