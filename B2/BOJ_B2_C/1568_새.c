#include <stdio.h>

int n, i, s, t;
int main(){
    scanf("%d", &n);
    while(n){
        i = 0, s = 0;
        while (s + i <= n)
            s += i++;
        n -= s, t += i - 1;
        }
    printf("%d", t);
    return 0;
}