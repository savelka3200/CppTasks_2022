#include <stdio.h>
#include <math.h>

#define EPS 0.000001

int main(){
    double a,b,c,x1,x2,d;
    scanf("%lf %lf %lf",&a,&b,&c);

    if(fabs (a)<EPS)
        {
        if(fabs(b)<EPS){
            if(fabs(c)<EPS){
            printf("Infinite number of solutions");
            }
            else{
                printf("No solutions");
            }
        }
        else{
            printf(  "1 solution - %lf", -c/b);
        }
        }
    else{
        d = b*b - 4*a*c;
        if(fabs(d)<EPS){
            printf("1 solution %lf", -b/2/a);
        }
        else if (d>0){
            x1 = (-b + sqrt(d))/2/a;
            x2 = (-b - sqrt(d))/2/a;
            printf("2 solutions: %lf %lf", x1,x2);
        }
        else{
            printf("No solutions");
        }
        }
    }
