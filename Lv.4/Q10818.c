#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, count=0, max=-1000000, min=1000000;
    scanf("%d", &N);

    int * data = (int*)malloc(sizeof(int) * N);

    while(count<N) {
        scanf("%d", data + count);
        if(*(data+count) > max) max = *(data+count);
        if(*(data+count) < min) min = *(data+count);
        count++;
    }
    printf("%d %d", min, max);
    free(data);
}