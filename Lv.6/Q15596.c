#include <stdio.h>

long long sum(int *a, int n) {
    int i;
    long long result=0;
        for(i=0;i<n;i++) result += a[i];
    return result;
}

int main() {
    int n, i; 
    long long result;
    scanf("%d", &n);
    int a[n];

    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    
    result = sum(a, n);
    printf("%lld", result);
}