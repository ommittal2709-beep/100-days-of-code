#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Write a program to print the sum of the first n odd numbers.
 */

int main(void) {
    unsigned int n;
    if (scanf("%u", &n) != 1) return 1;
    printf("%lu\n", (unsigned long)n * n);
    return 0;
}
