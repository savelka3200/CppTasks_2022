//task 11.5в


#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>


typedef struct{
    double coef;
    unsigned deg;
} Poly_Coef;


typedef struct Poly{
    unsigned m;
    Poly_Coef * coefs;
} Poly;


int input(Poly_Coef* r){

    printf("deg=");
    scanf(" %d",&r->deg);

    printf("coef=");
    scanf(" %lf",&r->coef);
    return 0;
}

void printCoef(const Poly_Coef r){
    printf("%lf*x^%u",r.coef,r.deg);
}

int inputPolynom(Poly* p){

    printf("Power n=");
    scanf(" %u",&p->m);
    p->coefs = calloc(p->m, sizeof(Poly_Coef));

    Poly_Coef x;
    for(int i=0;i<m;++i){
        input(&x);
        p->coefs[i] = x;
    }

}

int createPoly(unsigned m, Poly* p){
    p->m = m;
    p->coefs = calloc(p->m, sizeof(Poly_Coef));
}


Poly readFilePoly(const char * fname, unsigned num) {
    FILE *fp = fopen(fname, "rb"); // open file binary, for reading
    if (fp == NULL) {
        fprintf(stderr, "Error open file %s", fname);
        return -1;
    }
    Poly_Coef x;
    Poly z;
    unsigned number = 0;
    while (!feof(fp)) {
        int m;
        int res = fread(&m, sizeof(m), 1, fp); // read number of monoms
        if (res < 1) {
            printf("EOF %d\n", res);
            break;
        }

        number++;
        if (number == num) {

            createPoly(z);

            for (int j = 0; j < m; ++j) {
                res = fread(&x, sizeof(x), 1, fp); // read 1 struct from F
                if (res < 1) {
                    printf("EOF %d\n", res);
                    break;
                }
                z.coef[j] = x;
            }

            if (res < 1) {
                printf("EOF %d\n", res);
                break;
            }

        }
        printf("\n");
        fclose(fp);
        return z;
    }


    int readFileDerivative(const char *fname, unsigned num) {
        FILE *fp = fopen(fname, "rb"); // open file binary, for reading
        if (fp == NULL) {
            fprintf(stderr, "Error open file %s", fname);
            return -1;
        }
        Poly_Coef x;
        unsigned number = 0;
        while (!feof(fp)) {
            int m;
            int res = fread(&m, sizeof(m), 1, fp); // read number of monoms
            if (res < 1) {
                printf("EOF %d\n", res);
                break;
            }

            number++;

            for (int j = 0; j < m; ++j) {
                res = fread(&x, sizeof(x), 1, fp); // read 1 struct from F
                if (res < 1) {
                    printf("EOF %d\n", res);
                    break;
                }
                if (number == num) {
                    int deg = x.deg - 1;
                    double coef1 = x.coef * x.deg;
                    if (coef1 == 0) {
                        continue;
                    }
                    if (deg == 0)
                        printf("+%lf", coef);
                    else {
                        printf("+%lf*x^%d", coef, deg);
                    }

                }
            }

            if (res < 1) {
                printf("EOF %d\n", res);
                break;
            }

        }
        printf("\n");
        fclose(fp);
    }




#define MAX_POLY_DEG 10

    int main() {
        char *f = "poly.dat";

        writePolyToFile(f);

        readFile(f);
        int n = 1;
        printf("Number of polynome to read:");
        scanf("%d", &n);

        int res = readPoly(f, n);
        if (res == 0) {
            printf("\nNo polynome %d found", n);
        }

        double p[MAX_POLY_DEG] = {0,};
        int m = getPoly(f, 2, p, 5);
        printPoly(p, m);

    }
}