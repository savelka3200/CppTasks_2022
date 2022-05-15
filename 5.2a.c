// task 5.2a
#include <stdio.h>

int main(){
    int k;
    printf("k=");
    scanf("%d", &k);
    long long unsigned F0, F1, F;
    F0 = 0;
    F1 = 1;
    for (int i = 1; i < k; i++) {
        F = F0 + F1;
        F0 = F1;
        F1 = F;
    }
    printf("%d", F);
}

