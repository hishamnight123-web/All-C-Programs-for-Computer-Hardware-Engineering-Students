#include <stdio.h>

// Function to read a matrix
void readMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to transpose a matrix
void transposeMatrix(int src[10][10], int dest[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            dest[j][i] = src[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n;
    int a[10][10], tr[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    if (m < 1 || m > 10 || n < 1 || n > 10) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter elements of the matrix:\n");
    readMatrix(a, m, n);

    transposeMatrix(a, tr, m, n);

    printf("Transpose:\n");
    printMatrix(tr, n, m);

    return 0;
}
