#include <stdio.h>

int main() {
    char A, B;

    while(scanf("%hhd %hhd", &A, &B) == 2)
        printf("%d\n", A+B);
}