//task 4.27д

#include <stdio.h>
#include <math.h>

double Phi(double eps){
    double t=1,y=0;
    int k=0;

    while(fabs(t)>eps){
        k++;
        t=1.0/(k*k*k*k);
        //printf("t=%lf\n",t);
        y+=t;
    }
    return pow(y*90,0.25);
}

int main(){
    double eps;

    do{
        printf("eps=");
        scanf("%lf",&eps);
    }while(eps<=0);

    printf("Phi=%lf\n",Phi(eps));
}


