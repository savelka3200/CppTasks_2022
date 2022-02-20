//task 3.1

#include <stdio.h>

void print_digits(int n){
    int a = n/100;
    int b = (n/10)%10;
    int c = n%10;
    printf("%d %d %d\n", a,b,c);
}

void inverted(int n){
    int a = n/100;
    int b = (n/10)%10;
    int c = n%10;
    int n1=c*100+b*10+a;
    printf("n_new=%d\n", n1);
}

void sum_digits(int n){
    int a = n/100;
    int b = (n/10)%10;
    int c = n%10;
    int sum=a+b+c;
    printf("sum=%d\n", sum);
}

int main() {
    int n;
    printf("n="); //100<=n<1000
    scanf("%d",&n);

    if(n>99 && n<1000){
        print_digits(n);
        sum_digits(n);
        inverted(n);
    }
    else{
        printf("%d is not 3-digit!\n",n);
    }
}