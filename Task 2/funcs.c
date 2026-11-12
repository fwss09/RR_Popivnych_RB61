#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

/**
 * @file funcs.c
 * @brief реалізація функцій заповнення, сортування та виведення матриць
*/

// реалізація функції заповнення матриці
void fill_matrix(int N, int matrix[N][N], int a) {
    // проходимо по всіх рядках і стовпцях матриці
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            // записуємо випадкове число з діапазону [-a; a]
            matrix[row][col] = -a + rand() % (2 * a + 1);
        }
    }
}

// реалізація функції сортування матриці
void sort_columns(int N, int A[N][N], int B[N][N]) {
    // копіюємо всі елементи з A в B, щоб не змінювати початкову матрицю A
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            B[row][col] = A[row][col];
        }
    }

    // сортуємо кожен стовпець матриці B за зростанням
    for (int col = 0; col < N; col++) {
        for (int i = 0; i < N - 1; i++) {
            for (int row = 0; row < N - i - 1; row++) {
                // якщо верхнє число в стовпці більше за нижнє - міняємо їх місцями
                if (B[row][col] > B[row + 1][col]) {
                    int temp = B[row][col];
                    B[row][col] = B[row + 1][col];
                    B[row + 1][col] = temp;
                }
            }
        }
    }
}

// реалізація функції виведення матриці
void print_matrix(int N, int matrix[N][N]) {
    // виводимо матрицю по рядках
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            printf("%d ", matrix[row][col]);
        }
        // переходимо на новий рядок після виведення всіх стовпців
        printf("\n");
    }
}