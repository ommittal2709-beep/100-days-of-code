#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Write a program to print the following pattern:
 * 
 * *
 * 
 * *
 * *
 * *
 * 
 * *
 * *
 * *
 * *
 * *
 * 
 * *
 * *
 * *
 * 
 * *
 * 
 * 
 */

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 2) return 1;
    int first = 1;
    for (int number = 2; number <= n; ++number) {
        int prime = 1;
        for (int d = 2; d * d <= number; ++d)
            if (number % d == 0) prime = 0;
        if (prime) {
            if (!first) printf(" ");
            printf("%d", number);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
