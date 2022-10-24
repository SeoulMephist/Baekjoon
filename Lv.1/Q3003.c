#include <stdio.h>

int main() {
    int i;
    short chess[] = {1,1,2,2,2,8};
    short input[6];
    
    for(i=0;i<6;i++)
        scanf("%hd", &input[i]);
    for(i=0;i<6;i++)
        printf("%d ", chess[i]-input[i]);
}