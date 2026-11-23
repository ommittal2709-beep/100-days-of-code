#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Write a program to find the sum of digits of a number.
 */

int main(void) {
    unsigned long n;
    unsigned int sum = 0;
    if (scanf("%lu", &n) != 1) return 1;
    while (n > 0) { sum += (unsigned int)(n % 10); n /= 10; }
    printf("%u\n", sum);
    return 0;
}
