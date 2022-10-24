#include <stdio.h>

int main() {
    int C, N, i, j;
    scanf("%d", &C);

    for(i=0;i<C;i++) {
        scanf("%d", &N);
        int score[N], count=0, sum=0;
        float avg=0;

        for(j=0;j<N;j++) {
            scanf("%d", &score[j]);
            sum += score[j];
        }
        avg = (float) sum/N;

        for(j=0;j<N;j++) {
            if(score[j]>avg) count++;
        }
        printf("%.3f%%\n", (float)count*100/N);
    }
}