#include <stdio.h>

int self_num(int n) {
    int result = n;
    while(n>0) {
        result += n%10;
        n /= 10;
    }
    return result;
}

int main() {
    int data[10001]={1, }, i, result;

    for(i=0;i<10001;i++) {
        result = self_num(i);
        if(result<10001)
            data[result] = 1;
    }
    for(i=0;i<10001;i++) {
        if(data[i] != 1)
            printf("%d\n", i);
    }
}