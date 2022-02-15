// C program - task 1.9

#include <stdio.h>
#include <math.h>

int main(){
    double a, b, m, n;
    printf("a,b:\n");
    scanf("%lf %lf",&a,&b);
    m=(a+b)/2;
    n=2/(1/a+1/b);
    printf("arf=(a+b)/2=(%g+%g)/2=%g\n",a,b,m);
    printf("gar=2/(1/a+1/b)=2/(1/%g+1/%g)=%g",a,b,n);
}

