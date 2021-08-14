#include <stdio.h>

int main() {
    int n,i, p[10], m = 0;
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
        p[i] = 0;
    p[n % 10]++, n /= 10;
    while (n)
        p[n % 10]++, n /= 10;
    p[6] = (p[6] + p[9] + 1) / 2, p[9] = 0;
    for (i = 0; i < 10; i++)
        m = m > p[i] ? m : p[i];
    printf("%d", m);
    return 0;
}