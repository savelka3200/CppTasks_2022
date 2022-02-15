// C program - task 2.5

#include <stdio.h>
#include <math.h>

double Rosenbrock2d(double x, double y){
    return 100*pow(x*x-y,2)+pow(x-1,2);
}
int main(){
    printf("%lf, ",Rosenbrock2d(1,1));
    printf("%lf, ",Rosenbrock2d(1,0));
    printf("%lf\n",Rosenbrock2d(2,4));
    return 0;
}

