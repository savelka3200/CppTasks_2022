// task 8.3

#include <stdio.h>

int main() {
    int a[10][10], r, c;
    printf("N*M =  ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            printf("a[%zu][%zu]=", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("\nEntered matrix:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }
    return 0;
}
