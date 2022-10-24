#include <stdio.h>

int main() {
    char data[9], i, max=0, count;
    for(i=0;i<9;i++) {
        scanf("%hhd", &data[i]);
        if(data[i]>max) {
            max = data[i];
            count = i;
        }
    }
    printf("%d\n%d", max, count+1);
}