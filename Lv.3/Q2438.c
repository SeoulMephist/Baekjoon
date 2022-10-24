#include <stdio.h>

int main() {
    char N, i, k;
    scanf("%hhd", &N);
    
    for(i=0;i<N;i++) {
        for(k=0;k<i+1;k++) {
            printf("*");
        }
        printf("\n");
    }
}