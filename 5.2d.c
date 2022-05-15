// task 5.2d
#include <stdio.h>

unsigned sum_fib(int m) {
    int F0,F1,F,sum=2;
    F0 = 1;
    F1 = 1;
    while (F1<m) {
        F = F0 + F1;
        F0 = F1;
        F1 = F;
        sum+=F;
    }
    return sum - F;
}

int main() {
    int n;
    printf("sum = %d\n", sum_fib(1000));
}

