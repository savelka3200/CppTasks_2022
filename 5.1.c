//task 5.1
#include <stdio.h>

int main(){
    double a, n=1, s=1;
    printf("a=");
    scanf("%lf", &a);

    while (s<=a) {
        n++;
        s+=1.0/n;
    }
    s+=1.0/(n + 1);
    printf("%lf is for n = %lf",s, n+1);
    return 0;
}

