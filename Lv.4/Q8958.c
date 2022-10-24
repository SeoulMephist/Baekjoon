#include <stdio.h>
#include <string.h>

int main() {
    int N, i, j;
    char quiz[80];
    scanf("%d", &N);

    for(i=0;i<N;i++){
        int score=0, hit=1;
        scanf("%s", quiz);
        for(j=0;j<strlen(quiz);j++) {
            if(quiz[j]=='O') {
                score += hit;
                hit++;
            }
            else hit=1;
        }
        printf("%d\n", score);
    }
}