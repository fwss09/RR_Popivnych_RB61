#include <stdio.h>
#include "funcs.h"

/**
 * @brief головна функція програми
 * @return 0 при успішному завершенні програми
 */
int main() {
    double a;
    int N;

    printf("enter a: ");
    scanf("%lf", &a);

    printf("enter N: ");
    scanf("%d", &N);

    if(N < 0) {
        printf("n must be greater than 0");
        return 0;
    }


    printf("a - [%lf] | N - [%d]\n", a, N);

    double res = calc(a, N);

    printf("sum = %lf", res);
    
    return 0;
}
