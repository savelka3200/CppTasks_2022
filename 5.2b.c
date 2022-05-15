// task 5.2b
#include <stdio.h>

unsigned max_greater_fib(double a) {
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
    return n - 1;
}

int main() {
    double a;
    scanf("%lf", &a);
    printf("%u", max_greater_fib(a));
}