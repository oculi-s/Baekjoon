#include <stdio.h>

int main() {
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    a %= b, n--;
    while (n--)
        a *= 10, a %= b;
    printf("%d", (a * 10) / b);
    return 0;
}