#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcs.h"

/**
 * @brief точка входу в програму
 * @return 0 при успішному завершенні програми
 *         1 у разі введення некоректного розміру матриці
 */
int main() {
    // оголошення цілочисельної змінної для розміру матриці
    int N;

    printf("enter matrix size: ");
    // зчитуємо розмір квадратної матриці
    // перевіряємо щоб розмір був числом та більшим за 0
    if(scanf("%d", &N) != 1 || N <= 0) {
        printf("invalid input\n");
        return 1;
    }

    // запускаємо генератор випадкових чисел від поточного часу
    srand(time(NULL));

    // обираємо випадкове число а від 5 до 9
    int a = 5 + rand() % 5;

    // створюємо дві квадратні матриці розміром NxN
    int A[N][N], B[N][N];

    // заповнюємо матрицю випадковими числами від -a до a
    fill_matrix(N, A, a);

    // сортуємо стовпці A за зростанням і зберігаємо результат у матрицю B
    sort_columns(N, A, B);

    // виводимо згенероване число a
    printf("\ngenerated param a = %d (range: [%d; %d])\n", a, -a, a);

    // виводимо матрицю A
    printf("matrix A: \n");
    print_matrix(N, A);

    // виводимо матрицю B
    printf("matrix B: \n");
    print_matrix(N, B);

    return 0;
}