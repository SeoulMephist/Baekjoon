#include <stdio.h>

int main() {
    int max=0, i, N;
    float total=0;

    scanf("%d", &N);
    int score[N];

    for(i=0;i<N;i++) {
        scanf("%d", &score[i]);
        if(max < score[i]) max = score[i];
    }
    for(i=0;i<N;i++) {
        total += (float)score[i] / max * 100;
    }
    printf("%f", total/N);
}