// task 4.5

#include <stdio.h>

int main() {
    unsigned n;
    scanf("%u",&n);
    unsigned long long m=1Ul; //1 unsigned long
    for (unsigned i=n; i>=2; i-=2) {
        m *= i;
    }
    printf("%u!!=%Lu \n",n,m);
}



