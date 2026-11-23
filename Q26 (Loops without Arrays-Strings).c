#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Write a program to print numbers from 1 to n.
 */

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 1) return 1;
    for (int i = 1; i <= n; ++i)
        printf("%d%s", i, i == n ? "\n" : " ");
    return 0;
}
