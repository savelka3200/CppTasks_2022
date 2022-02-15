// C program - task 1.4

#include <stdio.h>
#include <math.h>

int main(){
    double m1, m2, r, g=0.6E-11, F;
    printf("m1=");
    scanf("%lf",&m1);
    printf("m2=");
    scanf("%lf",&m2);
    printf("r=");
    scanf("%lf",&r);
    F=(g*m1*m2)/(r*r);
    printf("F=%le", F);
}

