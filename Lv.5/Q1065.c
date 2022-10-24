#include <stdio.h>

int hansu(N) {
    int sum=99, result, i;
    if (N<100) result = N;
    else if (N<=1000) {
        for(i=100;i<=N;i++) {
            if((i/100-i/10%10)==(i/10%10-i%10))
                sum++;
        }
        result = sum;
    }
    return result;
}

int main() {
    int N, result;
    scanf("%d", &N);

    result = hansu(N);
    printf("%d", result);
}