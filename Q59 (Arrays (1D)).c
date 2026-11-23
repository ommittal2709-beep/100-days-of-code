#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Count even and odd numbers in an array.
 */

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) {
        printf("Invalid input\n");
        return 1;
    }
    int a[1000];
    for (int i = 0; i < n; ++i)
        if (scanf("%d", &a[i]) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    int even = 0, odd = 0;
    for (int i = 0; i < n; ++i)
        if (a[i] % 2 == 0) ++even; else ++odd;
    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}
