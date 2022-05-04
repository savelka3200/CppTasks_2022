// task 4.4

#include <stdio.h>

int main() {
    int n;
    float x,res,t;
    printf("n=");
    scanf("%d",&n);
    printf("x=");
    scanf("%f",&x);

    t=1;
    res=0;

    //printf("res=%d",&x);
    for(int i=1;i<=n;i++){
        t*=x;
        res+=i*t;
        //printf("+%f",i*t);
    }
    printf("y=%f",res);

}


