#include <stdio.h>

int main() {
    char T, A, B, i;
    scanf("%hhd", &T);
    for(i=0;i<T;i++) {
        scanf("%hhd %hhd", &A, &B);
        printf("%d\n", A+B);
    }
}