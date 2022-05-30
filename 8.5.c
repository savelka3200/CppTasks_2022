// task 8.5

#include <stdio.h>

int main() {
    int mas[10][10], transpose[10][10], N, M;
    printf("N*M: ");
    scanf("%d %d", &N, &M);

    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j) {
            printf("a[%zu][%zu]=", i, j);
            scanf("%d", &mas[i][j]);
        }

    printf("\nEntered matrix: \n");
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j) {
            printf("%d  ", mas[i][j]);
            if (j == M - 1)
                printf("\n");
        }

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j) {
            transpose[j][i] = mas[i][j];
        }

    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < M; ++i)
        for (int j = 0; j < N; ++j) {
            printf("%d  ", transpose[i][j]);
            if (j == N - 1)
                printf("\n");
        }
    return 0;
}
