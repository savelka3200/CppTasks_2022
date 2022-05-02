#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main(){
    double r,h,V;
    printf("r=");
    scanf("%lf",&r);
    printf("h=");
    scanf("%lf",&h);

    V=(r*r*h*M_PI)/3;
    printf("V=%f",V);
    return 0;
}