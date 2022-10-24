#include <stdio.h>

int main() {
    short data[10];
    char result=0, count, i, j;

    for(i=0;i<10;i++) {
        scanf("%hd", &data[i]);
        data[i] %= 42;
    }

    for(i=0;i<10;i++) {
        count = 0;
        for(j=i+1;j<10;j++) {
            if(data[i] == data[j]) count++;        
        }
        if(count == 0) result++;
    }
    printf("%d", result);
}