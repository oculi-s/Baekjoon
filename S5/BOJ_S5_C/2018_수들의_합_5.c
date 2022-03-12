#include <stdio.h>

int n, a, b, c, s;
int main() {
    scanf("%d", &n);
    b = 1, s = 1;
    while (a <= n){
        if (n > s)
            b++, s += b;
        else if (s > n)
            s -= a, a++;
        else
            c++, a++, b++, s += (b-a+1);
    }
    printf("%d", c);
    return 0;
}