#include <stdio.h>
#include "funcs.h"

/**
 * @brief точка входу в програму
 * @return 0 при успішному завершенні програми
 *         1 у разі введення некоректного значення
 */
int main() {
    // оголошення змінних
    double a;
    int N;

    // введення значення a
    printf("enter a: ");
    // перевірка коректності значення а
    if(scanf("%lf", &a) != 1) {
        printf("invalid input\n");
        return 1;
    }


    // введення значення N
    printf("enter N: ");
    // перевірка коректності значення N (N >= 0)
    if(scanf("%d", &N) != 1 || N < 0) {
        printf("n must be greater than or equal to 0\n");
        return 1;
    }

    // вивід на екран введених значень a та N
    printf("a - [%lf] | N - [%d]\n", a, N);

    // виклик функції для розрахунку суми ряду
    double res = calc(a, N);

    // вивід результату функції
    printf("sum = %lf\n", res);
    
    return 0;
}
