#include <stdio.h>

int main() {
    int matrix[2][2];
    int i, j;

    printf("Enter 4 numbers:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
