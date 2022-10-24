#include <stdio.h>

int main() {
    char n, i;
    scanf("%hhd", &n);
    for(i=0;i<9;i++) {
        printf("%d * %d = %d\n", n, i+1, n*(i+1));
    }
}