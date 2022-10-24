#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    if((A>0 && A<1000) && (B>0 && B<1000)) {
        int uni, ten, hun;
        uni = A*(B%10);
        ten = A*((B%100-B%10)/10);
        hun = A*(B/100);

        printf("%d\n%d\n%d\n", uni, ten, hun);
        printf("%d", uni+ten*10+hun*100);
    }
    else printf("Not Available");
}