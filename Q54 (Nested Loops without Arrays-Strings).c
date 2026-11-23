#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Write a program to print the following pattern:
 * 
 *    *
 *   ***
 *  *****
 * *******
 *  *****
 *   ***
 *    *
 * 
 */

int main(void) {
    for (int stars = 1; stars <= 7; stars += 2) {
        for (int i = 0; i < (7 - stars) / 2; ++i) printf(" ");
        for (int i = 0; i < stars; ++i) printf("*");
        printf("\n");
    }
    for (int stars = 5; stars >= 1; stars -= 2) {
        for (int i = 0; i < (7 - stars) / 2; ++i) printf(" ");
        for (int i = 0; i < stars; ++i) printf("*");
        printf("\n");
    }
    return 0;
}
