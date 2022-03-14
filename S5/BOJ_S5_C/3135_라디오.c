#include <stdio.h>
#include <stdlib.h>

int a, b, c, n, m = 1000;
int main() {
    scanf("%d %d\n%d", &a, &b, &n);
    while (n--){
        scanf("%d", &c);
        if (abs(b-c)<m)
            m = abs(b-c);
    }
    if (abs(b-a)>m)
        printf("%d", m+1);
    else
        printf("%d", abs(b-a));
}