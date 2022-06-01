//task 9.9я

#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable : 4996)

double** create_matrix(int n, int m) {
    double** a = (double**)malloc(n * sizeof(*a));
    for (int i = 0; i < n; i++) {
        a[i] = (double*)calloc(m, sizeof(*a));
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
            printf("a[%d][%d] = ", i, j);
            scanf("%lf", &a[i][j]);
        }
    }
    return a;
}


void print_matrix(double** a, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%lf  ", a[i][j]);
            if (j == m - 1)
                printf("\n");
        }
    }
}

int find_max_row(double** a, int n, int m) {
    int max_row;
    double max = a[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                max_row = i;
            }
        }
    }
    return max_row;
}

int find_max_column(double** a, int n, int m) {
    int max_column;
    double max = a[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                max_column = j;
            }
        }
    }
    return max_column;
}

void delete_(double** a, int k_r, int k_c, int n, int m){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j < k_c)
                a[i][j] = a[i][j];
            if (j > k_c)
                a[i][j - 1] = a[i][j];
            if (i < k_r)
                a[i][j] = a[i][j];
            if (i > k_r)
                a[i-1][j] = a[i][j];
            if (i > k_r && j > k_c)
                a[i-1][j-1] = a[i][j];
        }
       }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            printf("%lf  ", a[i][j]);
            if (j == m - 2)
                printf("\n");
        }
    }
}

int main() {
    int n, m;
    printf("n=");
    scanf("%d", &n);
    printf("m=");
    scanf("%d", &m);

    double** a = input_matrix(n, m);
    print_matrix(a, n, m);

    int max_row = find_max_row(a, n, m);
    int max_column = find_max_column(a, n, m);
    //printf("%d %d",max_row,max_column);

    printf("///////\n");
    delete_(a, max_row, max_column, n, m);

    delete_matrix(a, n);

    return 0;
}


