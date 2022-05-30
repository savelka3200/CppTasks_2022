// task 8.2

#include <stdio.h>
#include <stdbool.h>

#define N 3
#define M 3

bool change (double mas[N][M], size_t i, size_t j, double a){

    if(i>=N || j>=M) return false;

    mas[i][j] = a;

    return true;
}

void output(double mas[N][M]){
    for(size_t i=0;i<N;i++){
        for(size_t j=0;j<M;j++){
            printf("a[%zu][%zu]=%lf\n",i,j,mas[i][j]);
        }
    }
}

int main(){
    double mas[N][M] = {{1,2,3},{4,5,6},{7,8,9}};

    size_t i,j; // long unsigned
    double a;
    printf("i,j,a:");
    scanf("%zu %zu %lf", &i,&j,&a);

    change(mas,i,j,a);
    output(mas);
}