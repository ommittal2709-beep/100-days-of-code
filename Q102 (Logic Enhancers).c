#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
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
