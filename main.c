#include <stdio.h>

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


    printf("[%lf] --- [%d]", a, N);

    return 0;
}
