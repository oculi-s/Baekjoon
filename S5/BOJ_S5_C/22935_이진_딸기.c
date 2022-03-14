#include <stdio.h>

int t, n;
int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        n = (n-1) % 28 + 1;
        if (n > 15)
            n = 30 - n;
        printf("%s", n>7?"딸기":"V");
        n %= 8;
        printf("%s", n>3?"딸기":"V");
        n %= 4;
        printf("%s", n>1?"딸기":"V");
        n %= 2;
        printf("%s\n", n?"딸기":"V");
    }
}