// C program - task 1.5

#include <stdio.h>
#include <math.h>

int main(){
    double x,x2,x3,x12,x8,x4,x16,x32,x6,y_a,y_c,y_d,y_e,y_f;
    printf("x=");
    scanf("%lf",&x);
    x2=x*x;
    x4=x2*x2;
    x3=x*x*x;
    x8=x4*x4;
    x6=x3*x3;
    x12=x6*x6;
    x16=x8*x8;
    x32=x16*x16;
    y_a=x2*x2;
    y_c=x3*x3*x3;
    y_d=x12*x3;
    y_e=x8*x8*x8*x4;
    y_f=x32*x32;
    printf("x^4=%lf, ",y_a);
    printf("x^6=%lf, ",x6);
    printf("x^9=%lf\n",y_c);
    printf("x^15=%lf, ",y_d);
    printf("x^28=%lf, ",y_e);
    printf("x^64=%lf",y_f);
}
