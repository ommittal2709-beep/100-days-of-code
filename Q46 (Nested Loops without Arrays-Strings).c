#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Write a program to print the following pattern:
 * *****
 * *****
 * *****
 * *****
 * *****
 */

int main(void) {
    for (int r = 0; r < 5; ++r) {
        for (int c = 0; c < 5; ++c) printf("*");
        printf("\n");
    }
    return 0;
}
