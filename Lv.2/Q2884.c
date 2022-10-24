#include <stdio.h>

int main() {
    int hour, minute;
    scanf("%d %d", &hour, &minute);

    if ((hour<0 || hour>23) || (minute<0 || minute>59))
        printf("Error");
        else if (minute-45<0 && hour==0) {
            minute += 15;
            hour = 23;
        }
        else if (minute-45<0 && hour>0) {
            minute += 15;
            hour -= 1;
        }
        else minute -= 45;
    
    printf("%d %d", hour, minute);
}