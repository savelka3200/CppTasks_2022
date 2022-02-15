// C program - task 2.4(г)

#include <stdio.h>
#include <math.h>
int main(){
    double x,y;
    printf("x=");
    scanf("%lf",&x);
    y=pow(x,9)+pow(x,3)+1;
    printf("y=x^9+x^3+1=%lf",y);
    return 0;
}

