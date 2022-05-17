//task 5.22
#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("n=");
    scanf("%d",&n);

    double a0=1,ak;
    double b0=1.0/pow(2,0.5),bk;
    double t0=1.0/4,tk;
    double p0=1,pk;
    double Phi;

    for(int k=1; k<=n; ++k){
        ak=(a0+b0)/2;
        bk=pow(a0*b0,0.5);
        tk=t0-p0*pow(a0-ak,2);
        pk=2*p0;

        Phi=pow(ak+bk,2)/(4*tk);

        a0=ak;
        b0=bk;
        t0=tk;
        p0=pk;

    }
    printf("Phi=%lf",Phi);
}



