#include <stdio.h>

#define MAX 10

void readMatrix(int mat[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void multiplyMatrix(int a[MAX][MAX], int b[MAX][MAX], int res[MAX][MAX],
                    int rowsA, int colsA, int colsB) {
    // Write code here
     for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            res[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void printMatrix(int mat[MAX][MAX], int rows, int cols) {
    // Write code here
     for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r1, c1, r2, c2;
    int a[MAX][MAX], b[MAX][MAX], res[MAX][MAX];

    scanf("%d %d", &r1, &c1);
    readMatrix(a, r1, c1);

    scanf("%d %d", &r2, &c2);
    readMatrix(b, r2, c2);

    if (c1 != r2) {
        printf("Incompatible dimensions\n");
        return 0;
    }

    multiplyMatrix(a, b, res, r1, c1, c2);
    printMatrix(res, r1, c2);

    return 0;
}
