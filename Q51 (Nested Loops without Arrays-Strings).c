#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Write a program to print the following pattern:
 *     5
 *    45
 *   345
 *  2345
 * 12345
 */

int main(void) {
    for (int r = 1; r <= 5; ++r) {
        for (int c = 0; c < 5 - r; ++c) printf(" ");
        for (int c = 6 - r; c <= 5; ++c) printf("%d", c);
        printf("\n");
    }
    return 0;
}
