//task 5.6
#include <stdio.h>

void task_5_6_a(){
    double b, b_k;
    unsigned n;

    printf("b=");
    scanf("%lf",&b);
    printf("n=");
    scanf("%u",&n);

    b_k = b;

    for (unsigned i=0; i<n; i++){
        b_k = b + 1 / b_k;
    }

    printf("b_%u = %g\n", n, b_k);

}

int main(){
    task_5_6_a();
}
