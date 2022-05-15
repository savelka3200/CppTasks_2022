#include <stdio.h>
#include <math.h>

double fun(double x) {
    return  x * x * x + 4 * x * x + x - 6;
}

double root2(double eps, double a, double b) {
    double un,u1,u0 = (a + b) / 2.0;
    un = u0 + 2 * eps;
    u1 = un;
    while (fabs(un - u0) > eps) {
        un=u0-fun(u0)*(u1-u0)/(fun(u1)-fun(u0));
        u0=u1;
        u1=un;
    }
    return un;
}

void task20() {
    double eps, x;

    do {
        printf("eps=");
        scanf("%lf", &eps);
        if (eps > 0) break;
        printf("Input epsilon>0 once more");
    } while (1);
    x = root2(eps, 0, 2.0);
    printf("tg(%lf)=%lf, as tg(%lf)=%lf", x, x, x, tan(x));
}

double eqn(double x){
    return tan(x)-x;
}

double root(double eps, double a, double b){
    double mid = (a+b)/2.0;

    if(b-a<eps){
        return mid;
    }

    if(fabs(eqn(mid))<eps){
        return mid;
    }

    if(eqn(a)*eqn(mid)<=0){
        //look for root im (a,mid)
        return root(eps,a,mid);
    }
    else{
        //look for root im (mid,b)
        return root(eps,mid,b);
    }
}

void task19(){
    double eps,x;

    do{
        printf("eps=");
        scanf("%lf",&eps);
        if(eps>0) break;
        printf("Input epsilon>0 once more");
    }while(1);

    x=root(eps,0.001,1.15);
    printf("tg(%lf)=%lf,as tg(%lf)=%lf\n",x,x,x,tan(x));
}


double my_exp(double x, double eps){
    double y = 1.0;
    double t = 1.0; //t=x^k/k!
    int k =0;

    while(fabs(t)>eps){
        k++;
        t=t*x/k; //x1*x/1=x/1!, x/1!*x/2=x^2/2!
        y+=t;
    }
    return y;
}

double my_Phi(double x, double eps){
    double t = -x*x*x/3;
    double y = x+t; //t=(-1)^{k} x^{2k+1}/(2k-1)!/(2k+1)
    int k =1;

    while(fabs(t)>eps){
        k++;
        t*=-x*x/(2*k+1)/(2*k-2);
        y+=t;
    }
    return y;
}

void task8(){
    double eps,x;

    printf("x=");
    scanf("%lf",&x);

    do{
        printf("eps=");
        scanf("%lf",&eps);
    }while(eps<=0);

    printf("my_eps(%lf)=%lf, real exp(%lf)=%lf\n",x, my_exp(x,eps),x,exp(x));
}

void task7(){
    int n;
    printf("n=");
    scanf("%d",&n);

    double b0=1,b1=0,bk;
    double a0=0,a1=1,ak;

    double S =2.0/(a0+b0);

    if(n==1){
        printf("S=%lf",S);
        return;
    }

    S+=4.0/(a1+b1);
    if(n==2){
        printf("S=%lf",S);
        return;
    }

    double power_of_two = 4.0;
    for(int k=3; k<=n; ++k){
        bk=b1+a1;
        ak=a1/k+a0*bk;

        power_of_two*=2.0;
        S+=power_of_two/(ak+bk);

        b0=b1;
        b1=bk;
        a0=a1;
        a1=ak;
    }
    printf("S=%lf",S);
}


int main(){
    //task7();
    //task8();
    //task19();
    task20();
}

