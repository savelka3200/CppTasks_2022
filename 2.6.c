// C program - task 2.6

#include <stdio.h>
#include <math.h>

double length(double x1, double y1,double x2, double y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

double area(double a,double b,double c){
    double p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main(){
    double x1,y1,x2,y2,x3,y3,S;
    printf("Coordinates A:\n");
    scanf("%lf %lf",&x1,&y1);
    printf("Coordinates B:\n");
    scanf("%lf %lf",&x2,&y2);
    printf("Coordinates C:\n");
    scanf("%lf %lf",&x3,&y3);
    S=area(length(x1,y1,x2,y2),length(x1,y1,x3,y3),length(x3,y3,x2,y2));
    printf("S=%lf",S);
    return 0;
}




