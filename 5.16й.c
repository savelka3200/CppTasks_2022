//task 5.16й

#include <stdio.h>
#include <math.h>

double func(double eps,double x){
    double t=1,S=1;
    int k=1;

    while(fabs(t)>=eps){
        k++;
        t*=(-1.0)*x*x;
        //printf("t=%lf\n",t);
        S+=t;
    }
    return S;
}

int main(){
    double eps,x;

    printf("x=");
    scanf("%lf",&x);

    do{
        printf("eps=");
        scanf("%lf",&eps);
    }while(eps<=0);

    if (fabs(x) >= 1) {
        printf("incorrect input");
        return 0;
    }

    printf("y=1/(1+x^2)=%lf=1-x^2+x^4-x^6+...==%lf\n",(1.0/(1.0+x*x)),func(eps,x));
}




