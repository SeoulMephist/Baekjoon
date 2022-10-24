#include <stdio.h>

int main() {
    short T, i;
    char A, B;
    scanf("%hd", &T);

    for(i=0;i<T;i++) {
        scanf("%hhd %hhd", &A, &B);
        printf("Case #%d: %d\n", i+1,A+B);
    }
}