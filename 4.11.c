//task 4.11

#include <stdio.h>
#include <float.h> // DBL_EPSILON
#include <math.h> //fabs


int main(int argc, char **argv) {
    int i;
    double x, sum=0., sum_harm = 0.;
    i = 0;
    while(1){
        printf("a[%d]=", i); // a[0]= , a[1]=
        scanf("%lf", &x);

        //if(x==0) break;  // bad because double comparison
        if(fabs(x) <= 2*DBL_EPSILON) break;

        sum +=x;
        sum_harm+=1/x;
        i++;
    }  //while(x!=0);
    printf("avg = %lf, harm = %lf", sum/i, i/sum_harm);
}
