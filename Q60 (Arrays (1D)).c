#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Count positive, negative, and zero elements in an array.
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
    int positive = 0, negative = 0, zero = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > 0) ++positive;
        else if (a[i] < 0) ++negative;
        else ++zero;
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);
    return 0;
}
