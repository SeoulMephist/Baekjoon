#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if ((A<0 || A>23) || (B<0 || B>59) || C<0) {
        printf("Error");
        return 0;
    }
    
    if (B+C>59) {
        if (A+(B+C)/60>23){
            A = A-24 + (B+C)/60;
            B = (B+C)%60;
        }
        else {
            A = A + (B+C)/60;
            B = (B+C)%60;
        }
    }
    else {
        B = B+C;
    }
    printf("%d %d", A, B);
}