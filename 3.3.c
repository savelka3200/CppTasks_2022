// task 3.3

#include <stdio.h>
#include <inttypes.h>

int main() {

    int32_t a,b,c;
    printf("a,b,c:\n");
    scanf("%d,%d,%d", &a, &b, &c);

    //a)
    int32_t d = a*b*c;
    printf("p=%d", d);

    //b)
    int64_t d1 = (int64_t)a*b*c;
    printf("p=%lld","\n", d1);
}