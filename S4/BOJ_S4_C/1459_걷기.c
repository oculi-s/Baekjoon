#include <stdio.h>

typedef unsigned long long lld;
lld x, y, w, s, m, n;

int main() {
    scanf("%llu %llu %llu %llu", &x, &y, &w, &s);
    m = x < y ? x : y;
    n = (x + y - 2 * m);
    if (s < w)
        printf("%llu", m * s + n / 2 * 2 * s + n % 2 * w);
    else if (m * s < 2 * m * w)
        printf("%llu", m * s + n * w);
    else
        printf("%llu", (x + y) * w);
    return 0;
}