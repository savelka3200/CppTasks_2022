//task 7.10г

#include <stdio.h>
#include <math.h>

#define N 1000

int counter(int mas[], int n){

    int counter=0;

    for (int i=1;i<=(int)sqrt(n);i++){
        if (mas[i*i-1]%2==0){
            counter+=1;
        }
    }

    return counter;
}

int main(){

    int mas[N],n;
    for(int i=0;i<N;i++){
        printf("a_%d=", i+1);
        scanf("%d",&mas[i]);
        if (mas[i] == 0) {
            n = i;
            break;
        }
    }

    printf("\nNumber of such elements = %d", counter(mas,n));
}
