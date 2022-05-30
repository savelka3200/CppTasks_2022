//task 6.3

#include <stdio.h>
#include <inttypes.h>

int main() {
    uint64_t m;
    unsigned j;

    scanf_s("%" PRIu64"", &m);
    scanf_s("%u", &j);

    uint64_t res1 = m & ~(1 << 3);

    printf("r=%" PRIu64 ", %" PRIx64, res1, res1);
}