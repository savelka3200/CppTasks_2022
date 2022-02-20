// task 3.6

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a,&b,&c);

    a=fabs(a);
    b=fabs(b);
    c=fabs(c);

    float min=a, max=b;

    if(a>b){
        min=b;
        max=a;
    }
    if(min>c){
        min=c;
    }
    if(max<c){
        max=c;
    }
    printf("max=%f, min=%f", max,min);
}

