// task 8.7

#include <stdio.h>

#define N 3
int main() {
    double mas[N][N], det;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("a[%d][%d]=", i, j);
            scanf("%lf", &mas[i][j]);
        }
    }
    det = mas[0][0] * (mas[1][1] * mas[2][2] - mas[1][2] * mas[2][1]) - mas[0][1] * (mas[1][0] * mas[2][2] - mas[2][0] * mas[1][2]) + mas[0][2] * (mas[1][0] * mas[2][1] - mas[1][1] * mas[2][0]);
    printf("det = %lf", det);
}
