// task 4.6

#include <stdio.h>
#include <math.h>

void task_a(){
    unsigned n;
    printf("n=");
    scanf("%u",&n);

    double total = sqrt(2);

    for(unsigned i=1;i<n;i++)
        total = sqrt(2+total);

    printf("total = %g\n",total);
}

void task_b(){
    unsigned n;
    printf("n=");
    scanf("%u",&n);

    double total = sqrt(3U*n);

    for(unsigned i=n-1;i>=1;i--)
        total = sqrt(3U*n+total);

    printf("total = %g\n",total);
}

int main(){
    task_a();
    task_b();
    return 0;
}