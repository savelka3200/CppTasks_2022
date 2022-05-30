//task 6.1

#include <stdio.h>
#include <inttypes.h>

int main() {

    uint8_t n;
    scanf_s("n= %hhd", &n);

    uint64_t m = 1UL << n;
    printf("2^%hhu = %" PRIu64 "\n", n, m);
}