//task 4.18ж

#include <stdio.h>

int main() {
    int k;
    float x,res,t,res1;
    printf("k=");
    scanf("%d",&k);
    printf("x=");
    scanf("%f",&x);

    if (k < 0) {
        printf("incorrect input");
        return 0;
    }

    t=1;
    res=x;

    for(int i=1;i<=k;i++){
        t*=4*i*i+2*i;
        res=(res*(-1)*x*x);
        res1=res/t;
        //printf("\n%f",res);
        //printf("\n%f",res1);
        //printf("\n%f",t);
    }
    printf("x_k=%f",res1);

}