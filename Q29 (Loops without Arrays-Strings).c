#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Write a program to calculate the factorial of a number.
 */

int main(void) {
    unsigned int n;
    if (scanf("%u", &n) != 1 || n > 20) return 1;
    unsigned long result = 1;
    for (unsigned int i = 2; i <= n; ++i) result *= i;
    printf("%lu\n", result);
    return 0;
}
