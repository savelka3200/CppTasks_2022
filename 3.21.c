//task 3.21

#include <stdio.h>
#include <math.h>

int main()
{
    double x,y,z,r;
    printf("x=");
    scanf("%lf",&x);
    printf("y=");
    scanf("%lf",&y);
    printf("z=");
    scanf("%lf",&z);
    printf("R=");
    scanf("%lf",&r);

    if(x<=r){
        if(y<=r){
            if(z<=r){
                printf("The point belongs to the ball");
            }
            else{
                printf("The point does not belong to the ball");
            }
        }
        else{
            printf(  "The point does not belong to the ball");
        }
    }
    else{
        printf(  "The point does not belong to the ball");
    }

    return 0;
}

