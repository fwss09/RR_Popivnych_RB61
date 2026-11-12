#include <stdio.h>

int main() {
    double a;
    int N;

    printf("enter a: ");
    scanf("%lf", &a);

    double sum = a;
    double term = a;

    printf("enter N: ");
    scanf("%d", &N);
    if(N < 0) {
        printf("n must be greater than 0");
        return 0;
    }


    printf("[%lf] --- [%d]", a, N);

    for (int i = 1; i <= N; i++) {
        term = term * (a * a) / ((2.0 * i) * (2.0 * i + 1));
        sum += term;
    } 

    printf("sum = %lf", sum);
    
    return 0;
}
