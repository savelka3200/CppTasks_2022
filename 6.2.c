//task 6.2

#include <stdio.h>

int main() {
    int n;
    unsigned k;

    scanf_s("%d", &n);
    scanf_s("%u", &k);

    int res = n | (1 << k);
    printf("r=%d", res);
}