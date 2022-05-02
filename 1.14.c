// C program - task 1.14

#include <stdio.h>
#include <math.h>

int main(){
    double a,t,s,v,t1;
    printf("a=");
    scanf("%lf",&a);
    printf("t=");
    scanf("%lf",&t);
    printf("v=");
    scanf("%lf",&v);
    s=a*t*t/2;
    t1=v/a;
    printf("%lf\n",s);
    printf("%lf\n",t1);
}

