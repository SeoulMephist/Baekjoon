#include <stdio.h>

int main() {
    int data, i, sum=0;
    scanf("%d", &data);
    for(i=0;i<data;i++)
        sum += i+1;
    printf("%d", sum);
}