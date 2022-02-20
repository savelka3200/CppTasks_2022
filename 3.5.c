// task 3.5

#include <stdio.h>


int main() {
    unsigned a, b;
    scanf("%u %u", &a,&b);
    if(a>b){
        printf("max=%u min=%u", a,b);
    }
    else{
        printf("max=%u min=%u", b,a);
    }
}

