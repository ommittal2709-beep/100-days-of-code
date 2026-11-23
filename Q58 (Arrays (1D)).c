#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Find the maximum and minimum element in an array.
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
    int maximum = a[0], minimum = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] > maximum) maximum = a[i];
        if (a[i] < minimum) minimum = a[i];
    }
    printf("Max=%d, Min=%d\n", maximum, minimum);
    return 0;
}
