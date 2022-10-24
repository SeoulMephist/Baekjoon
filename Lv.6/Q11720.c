#include <stdio.h>

int main() {
    int N, sum=0, i;
    char num[100];
    scanf("%d %s", &N, num);

    for(i=0;i<N;i++)
        sum += num[i] - '0';
    
    printf("%d", sum);
}