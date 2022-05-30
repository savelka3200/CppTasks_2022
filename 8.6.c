// task 8.6

#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 3

int input_matr(int mas[N][M]){
    for(size_t i=0;i<N;i++){
        for(size_t j=0;j<M;j++){
            printf("\ta[%zu][%zu]=",i,j);
            scanf("%d",&mas[i][j]);
        }
    }
    return EXIT_SUCCESS;
}

float sub_diag(int inp_matr[N][M], int k){
    float res =0.f;
    for(size_t i=0;i<N;i++){
        if((i-k>=0)&&(i-k<=M)){
            res += inp_matr[i][i-k];
        }
    }
    return res;
}

void output(int mas[N][M]){
    for(size_t i=0;i<N;i++){
        printf("\n");
        for(size_t j=0;j<M;j++){
            printf("\ta[%zu][%zu]=%d",i,j,mas[i][j]);
        }
    }
}

int main(){
    int mas[N][N];
    input_matr(mas);
    int k;
    scanf("%d",&k);

    output(mas);

    printf("\n sub=%f",sub_diag(mas,k));
}
