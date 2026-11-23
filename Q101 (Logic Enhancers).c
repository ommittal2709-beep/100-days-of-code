#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
 */

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    long a[1000];
    for (int i = 0; i < n; ++i)
        if (scanf("%ld", &a[i]) != 1) return 1;
    for (int i = 0; i < n; ++i)
        printf("%ld%s", a[i], i == n - 1 ? "\n" : " ");
    return 0;
}
