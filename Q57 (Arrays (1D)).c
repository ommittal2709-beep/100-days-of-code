#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Find the sum of array elements.
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
    long sum = 0;
    for (int i = 0; i < n; ++i) sum += a[i];
    printf("%ld\n", sum);
    return 0;
}
