// C program - task 2.2

#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;
    printf("a,b:\n");
    scanf("%f %f",&a,&b);
    c = hypot(a,b); //c=sqrt(a*a+b*b)
    printf("c=%f",c);
    return 0;
}