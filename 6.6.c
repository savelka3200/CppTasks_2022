//task 6.6

#include <stdio.h>

int main() {

    for (int x = 0; x < 17; x++) {

        int t1 = (x & (x - 1)) > 0;
        int t2 = (x & -x);

        printf("%d: %d % d \n", x, t1, t2);

    }

}

