#include <stdio.h>

int main() {
    int X, N, sum=0;
    int price[100];
    short number[100], i;
    scanf("%d %d", &X, &N);
    for(i=0;i<N;i++) {
        scanf("%d %hd", &price[i], &number[i]);
        sum = sum + price[i]*number[i];
    }
    
    if(X==sum) printf("Yes");
    else printf("No");
}