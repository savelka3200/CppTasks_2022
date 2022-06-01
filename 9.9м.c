//task 9.9м

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double** create_matrix(int n, int m) {
    double** a = (double**) malloc(n * sizeof(*a));
    for (int i = 0; i < n; i++) {
        a[i] = (double*) calloc(m, sizeof(*a));
    }
    return a;
}


void delete_matrix(double** a, int n) {
    for (int i = 0; i < n; i++)
        free(a[i]);
    free(a);
}


double** input_matrix(int n, int m) {
    double** a = create_matrix(n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("a[%d][%d] = ",i,j);
            scanf("%lf",&a[i][j]);
        }
    }
    return a;
}


void print_matrix(double** a, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%lf  ",a[i][j]);
            if (j == m - 1)
                printf("\n");
        }
    }
}


void delete_columns(double** a, int n, int m, int k1, int k2) {
    int k = k2 - k1 + 1;
    if (k1 != k2) {
        for (int i = 0; i < n; i++) {
            for (int j = (k1 - 1); j <= (k2 - 1); j++) {
                a[i][j] = a[i][j + k];
            }
        }
    }
    else{
        for (int i = 0; i < n; i++) {
            for (int j = k; j <= (k+2); j++) {
                a[i][j] = a[i][j + k];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m-k; j++) {
            printf("%lf  ",a[i][j]);
        }
    }
}

int main() {
    int n, m;
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);

    double** a = input_matrix(n, m);
    print_matrix(a, n, m);

    int k1, k2;
    printf("k1=");
    scanf("%d",&k1);
    printf("k2=");
    scanf("%d",&k2);

    delete_columns(a, n, m, k1, k2);

    delete_matrix(a, n);


    return 0;
}

