//task 7.9в

#include <stdio.h>
#include <math.h>

#define N 1000

int max_arr(int mas[], int n){

    int max_mas = mas[1];

    for(int i=1;i<n;i+=2){
        if(mas[i]>max_mas){
            max_mas = mas[i];
        }
    }

    return max_mas;
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

    printf("\nMax=%d", max_arr(mas,n));
}



