#ifndef TASK_2_FUNCS_H
#define TASK_2_FUNCS_H

/**
 * @brief заповнює матрицю випадковими числами від -a до a
 * @param N розмір матриці (NxN)
 * @param matrix матриця для заповнення
 * @param a межа діапазону випадкових чисел
 */
void fill_matrix(int N, int matrix[N][N], int a);

/**
 * @brief копіює матрицю A в B і сортує стовпці матриці B за зростанням
 * @param N розмір матриць (NxN)
 * @param A початкова матриця
 * @param B матриця з відсортованими стовпцями
 */
void sort_columns(int N, int A[N][N], int B[N][N]);

/**
 * @brief виводить матрицю
 * @param N розмір матриці (NxN)
 * @param matrix матриця для виведення
 */
void print_matrix(int N, int matrix[N][N]);

#endif //TASK_2_FUNCS_H