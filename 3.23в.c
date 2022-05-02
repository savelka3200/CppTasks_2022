// task 3.23в

#include <stdio.h>
#include <math.h>

double leakyReLu(double x, double a)
{
    if (x < 0) {
        return a*x;
    }
    else if (x >= 0) {
        double y = 0;
        return y;
    }
}

double leakyReLu_derivative(double x, double a)
{
    if (x < 0) {
        return a;
    }
    else if (x >= 0) {
        double g = 0;
        return g;
    }
}

int main()
{
    double x,a;
    printf("x=");
    scanf("%lf",&x);
    printf("a=");
    scanf("%lf",&a);

    printf("y=%lf, g=%lf",leakyReLu(x,a),leakyReLu_derivative(x,a));
    return 0;
}
