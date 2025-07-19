#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols], sumMatrix[rows][cols];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform addition
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of the matrices:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
