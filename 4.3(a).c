// task 4.3a

#include <stdio.h>
//without <math.h>

int main() {
    int n;
    float x,y,t;
    printf("x=");
    scanf("%f",&x);
    printf("n=");
    scanf("%d",&n);

    t=1; // t=x^0
    y=1;

    printf("y=1");

    for(int i=0;i<n;i++){
        t*=x; //t=x^{i+1}
        y+=t;
        printf("+%f",t);
    }
    printf("\ny=%f",y);

}

