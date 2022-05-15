// task 5.2c
#include <stdio.h>

unsigned min_fib(double a) {
    unsigned n = 1;
    long long unsigned F0, F1, F;
    F0 = 0;
    F1 = 1;
    while (F1 < a) {
        F = F0 + F1;
        //printf("%llu= &llu+%llu", F, F1, F0);
        F0 = F1;
        F1 = F;
        n++;
    }
    return n;
}

int main() {
    double a;
    scanf("%lf", &a);
    printf("%u", min_fib(a));
}

