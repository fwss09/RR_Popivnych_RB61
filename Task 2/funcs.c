#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

void fill_matrix(int N, int matrix[N][N], int a) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            matrix[row][col] = -a + rand() % (2 * a + 1);
        }
    }
}

void sort_columns(int N, int A[N][N], int B[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            B[row][col] = A[row][col];
        }
    }

    for (int col = 0; col < N; col++) {
        for (int i = 0; i < N - 1; i++) {
            for (int row = 0; row < N - i - 1; row++) {
                if (B[row][col] > B[row + 1][col]) {
                    int temp = B[row][col];
                    B[row][col] = B[row + 1][col];
                    B[row + 1][col] = temp;
                }
            }
        }
    }
}

void print_matrix(int N, int matrix[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
}