// task 4.8-10

#include <stdio.h>
#include <float.h>

int main() {
    // task 8
    int m;
    scanf("%d",&m);
    if(m<1){
        printf("incorrect input");
        return 0;
    }

    int p=1,r=0; // p=4^r
    while(p<m){
        p*=4;
        r++;
    }
    printf("4^%d < %d",r-1,m);

    // task 9
    int m1;
    scanf("%d",&m1);
    if(m1<1){
        printf("incorrect input");
        return 0;
    }

    int p1=1,r1=0; // p=2^r
    do{
        p1*=2;
        r1++;
    } while(p1<=m1);
    printf("2^%d > %d",r1,m1);


    //task 10
    double eps = 1.0;
    int k=0;
    do{
        eps = eps/2;
        k++;
    } while(1.0 + eps!=1.0);

    printf("\nk=%d zeros=%g, %g",k,eps*2, DBL_EPSILON);

}

