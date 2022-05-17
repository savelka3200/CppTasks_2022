//task 5.10е
#include <stdio.h>
#include <math.h>

int main(){
    int n,t,l=1;
    printf("n=");
    scanf("%d",&n);

    double a0=1,ak,S=0;

    for(int k=1; k<=n; k++){
        ak=k*a0+1.0/k;
        t=pow(2,k);
        l*=k;
        S+=(t/l)*ak;
        a0=ak;
        //printf("t=%d\n",t);
        //printf("l=%d\n",l);
        //printf("ak=%lf\n",ak);
        //printf("S=%lf\n",S);
    }

    printf("S=%lf",S);
}


