#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Search for an element in an array using linear search.
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
    int target;
    if (scanf("%d", &target) != 1) return 1;
    int found = -1;
    for (int i = 0; i < n; ++i)
        if (a[i] == target) { found = i; break; }
    printf("%d\n", found);
    return 0;
}
