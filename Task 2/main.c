#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcs.h"

int main() {
    int N;

    printf("enter matrix size: ");
    if(scanf("%d", &N) != 1 || N <= 0) {
        printf("invalid input\n");
        return 1;
    }

    srand(time(NULL));

    int a = 5 + rand() % 5;

    int A[N][N], B[N][N];

    fill_matrix(N, A, a);

    sort_columns(N, A, B);

    printf("\ngenerated param a = %d (range: [%d; %d])\n", a, -a, a);
    printf("matrix A: \n");
    print_matrix(N, A);

    printf("matrix B: \n");
    print_matrix(N, B);

    return 0;
}