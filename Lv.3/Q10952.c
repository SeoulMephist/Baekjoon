#include <stdio.h>

int main() {
    char A, B;
    int i;

    for(i=0;;i++) {
        scanf("%hhd %hhd", &A, &B);
        if ( A == 0 && B == 0) break;
        printf("%d\n", A+B);
    }
}