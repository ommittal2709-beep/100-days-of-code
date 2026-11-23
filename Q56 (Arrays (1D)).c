#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Read and print elements of a one-dimensional array.
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
    for (int i = 0; i < n; ++i)
        printf("%d%s", a[i], i == n - 1 ? "\n" : " ");
    return 0;
}
