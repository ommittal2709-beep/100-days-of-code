#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

/*
 * Check if a matrix is symmetric.
 */

int main(void) {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 ||
        rows < 1 || cols < 1 || rows > 20 || cols > 20)
        return 1;
    int a[20][20];
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            if (scanf("%d", &a[i][j]) != 1) return 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            printf("%d%s", a[i][j], j == cols - 1 ? "\n" : " ");
    }
    return 0;
}
