// C program - task 2.17е

#include <stdio.h>
#include <math.h>

double softPlus(double x){
    return log(1+ exp(x));
}

double softPlus_derivative(double x){
    return exp(x)/(1 + exp(x));
}

int main(){
    double x;
    printf("x=");
    scanf("%lf",&x);
    printf("y=%lf, g=%lf",softPlus(x),softPlus_derivative(x));
    return 0;
}

