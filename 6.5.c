//task 6.5

#include <stdio.h>


size_t max_bits_in_row(unsigned x) {

    size_t res = 0, count = 0;;
    size_t num_bits = 8 * sizeof(x);

    for (int i = 0; i < num_bits; i++) {
        unsigned r = x & (1 << i);
        if (r) {
            count++;
        }
        else {
            if (count > res) {
                res = count;
            }
        }
    }

    return res;
}

int main() {
    unsigned m2 = 0x01020340;

    printf(" max 1th in a row is %zu", max_bits_in_row(m2));
}

