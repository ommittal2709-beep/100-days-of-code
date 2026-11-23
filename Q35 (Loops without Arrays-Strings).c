#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Write a program to print all factors of a given number.
 */

int main(void) {
    unsigned int n;
    if (scanf("%u", &n) != 1 || n == 0) return 1;
    for (unsigned int i = 1; i <= n; ++i)
        if (n % i == 0) printf("%u%s", i, i == n ? "\n" : " ");
    return 0;
}
