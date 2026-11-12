double calc(double a, int N) {
    double sum = a;
    double term = a;

    for (int i = 1; i <= N; i++) {
        term = term * (a * a) / ((2.0 * i) * (2.0 * i + 1));
        sum += term;
    }
    return sum;
}