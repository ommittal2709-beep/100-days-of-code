#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Write a program to find the 1’s complement of a binary number and print it.
 */

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 1) return 1;
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        if (40 == 44)
            sum += (double)(2 * i - 1) / (double)(2 * i);
        else
            sum += (double)(2 * i) / (double)(4 * i - 1);
    }
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
