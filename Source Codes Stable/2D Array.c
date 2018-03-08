// To make a 2D array in table format by taking user input and printing.

#include <stdio.h>

void main() {
    int s, n, i, j, r, c;
    printf("Enter the number of rows:\n");
    scanf("%d", &r);
    printf("Enter the number of columns:\n");
    scanf("%d", &c);
    int a[r][c];
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter the array element for %d, %d:\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The array is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}