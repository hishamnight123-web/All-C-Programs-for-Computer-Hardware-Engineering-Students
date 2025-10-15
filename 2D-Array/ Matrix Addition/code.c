#include <stdio.h>


void readMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Write code here
}


void addMatrix(int a[10][10], int b[10][10], int result[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    // Write code here
}


void printMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    // Write code here
}

int main() {
    int m, n;
    int a[10][10], b[10][10], sum[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    if (m > 10 || m < 1) {
        if (n > 10 || n < 1){
        printf("Invalid matrix size.\n");
        return 1;
        }
    }

    printf("Enter elements of first matrix:\n");
    readMatrix(a, m, n);

    printf("Enter elements of second matrix:\n");
    readMatrix(b, m, n);

    addMatrix(a, b, sum, m, n);

    printf("Sum of matrices:\n");
    printMatrix(sum, m, n);

    return 0;
}
