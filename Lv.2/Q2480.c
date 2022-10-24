#include <stdio.h>

char max(char a,char b,char c) {
    char result;
    if (a>b&&a>c) result = a;
    else if (b>a&&b>c) result = b;
    else result = c;
    
    return result;
}

int main() {
    char first, second, third;
    int prize;
    scanf("%hhd %hhd %hhd", &first, &second, &third);

    if(first<0||second<0||third<0) {
        printf("Error");
        return 0;
    }

    if(first==second && second==third)
        prize = 10000 + first*1000;
    else if(first==second || first==third)
        prize = 1000 + first*100;
    else if(second==third)
        prize = 1000 + second*100;
    else 
        prize = max(first,second,third)*100;
    
    printf("%d", prize);
}