// task 4.3b

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float x,y,t,res;
    printf("n=");
    scanf("%d",&n);
    printf("x=");
    scanf("%f",&x);
    printf("y=");
    scanf("%f",&y);

    res=1;
    printf("res=1");
    for(int i=1;i<=n;i++){
        t = pow(x, pow(2, i)) * pow(y, i);
        res += t;
        printf("+%f",t);
    }

    printf("\nres=%f",res);
}

