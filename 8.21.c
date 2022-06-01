//task 8.21

#include <stdio.h>


void main() {
	int i, j, k, a, m, n;
	static int ma[10][10], mb[10][10];
	printf("m=");
	scanf("%d", &m);
	printf("n=");
	scanf("%d", &n);
	printf("Enter the matrix \n");
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&ma[i][j]);
			mb[i][j] = ma[i][j];
		}
	}
	printf("The given matrix is \n");
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			printf(" %d", ma[i][j]);
		}
		printf("\n");
	}

	printf("After changing \n");
	for (j = 0; j < n; ++j) {
		for (i = 0; i < m; ++i) {
			for (k = i + 1; k < m; ++k) {
				if (mb[i][j] > mb[k][j]) {
					a = mb[i][j];
					mb[i][j] = mb[k][j];
					mb[k][j] = a;
				}
			}
		}
	}
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			printf(" %d", mb[i][j]);
		}
		printf("\n");
	}
}