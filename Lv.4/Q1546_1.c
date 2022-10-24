#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, max=0;
    float total=0;

    scanf("%d", &N);
    int *score = (int*)malloc(sizeof(int)*N);

    for(i=0;i<N;i++) {
        scanf("%d", &score[i]);
        if(max<score[i]) max = score[i];
    }
    
    for(i=0;i<N;i++) {
    total += (float) score[i]/max*100;
    }

    printf("%f", total/N);
    free(score);
}