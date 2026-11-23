#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Write a program to check if a number is prime.
 */

int main(void) {
    unsigned int n;
    if (scanf("%u", &n) != 1) return 1;
    int prime = n >= 2;
    for (unsigned int i = 2; i * i <= n && prime; ++i)
        if (n % i == 0) prime = 0;
    printf("%s\n", prime ? "Prime" : "Not prime");
    return 0;
}
