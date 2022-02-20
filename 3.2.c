//task 3.2

#include <stdio.h>

void permutations(int n){
    int a = n/100;
    int b = (n/10)%10;
    int c = n%10;
    int n1=c*100+b*10+a;
    int n2=c*100+a*10+b;
    int n3=b*100+c*10+a;
    int n4=b*100+a*10+c;
    int n5=a*100+c*10+b;
    if(a==b){
        printf("%d have the same numbers\n",n);
    }
    else{
        if(c==b){
            printf("%d have the same numbers\n",n);
        }
        else{
            if(c==a) {
                printf("%d have the same numbers\n", n);
            }
            else{
                printf("permutations: %d, %d, %d, %d, %d ", n1,n2,n3,n4,n5);
            }
        }
    }
}

int main() {
    int n;
    printf("n=");
    scanf("%d",&n);

    if(n>99 && n<1000){
        permutations(n);
    }
    else{
        printf("%d is not 3-digit!\n",n);
    }
}

