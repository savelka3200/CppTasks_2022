//task 9.9я

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

int find_max(double** a,int n, int m, int max_row, int max_column){

    double max = a[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            if(a[i][j]>max){
                max=a[i][j];
                max_row=i;
                max_column=j;
            }
        }
    }
    return max_row,max_column;
}

double** delete_column(double** a, int k, int n, int m)
{

    double** a2 = (double**) malloc(n * sizeof(*a2));
    for (int i = 0; i < n; i++){

        a2[i] = (double**) malloc((n) * sizeof(*a2));

        for (int j = 0; j < m; j++){
            if (j!=k){
                a2[i][j] = a[i][j];
            }
        }
    }
    return a2;
}


int** delete_row(int** a, int k, int n, int m)
{
    double** a2 = (double**) malloc(m * sizeof(*a2));
    for (int i = 0; i < n ; i++) {
        a2[i] = (double **) malloc((m) * sizeof(*a2));
        for (int j = 0; j < m; j++) {
            for (int j = 0; j < m; j++) {
                if (i != k) {
                    a2[i][j] = a[i][j];
                }
            }

        }
    }
    return a2;
}


int main() {
    int n, m;
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);

    double** a = input_matrix(n, m);
    print_matrix(a, n, m);

    int max_row, max_column = find_max(a,n,m,max_row,max_column);
    printf("///////\n");
    double** a2 = delete_column(a,max_column,n,m);
    a2 = delete_row(a2,max_row,n,m);

    print_matrix(a2, n-1, m-1);

    delete_matrix(a, n);
    delete_matrix(a2, n);

    return 0;
}


