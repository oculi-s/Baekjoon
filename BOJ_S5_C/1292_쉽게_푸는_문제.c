#include <stdio.h>
int _m(int a, int b, int d){
    if (d)
        return a > b ? a : b;
    else 
        return a < b ? a : b;
}

int main() {
    int a, b, m = 1, n = 1, t = 0;
    scanf("%d %d", &a, &b);
    while (m * (m + 1) / 2 < a)
        m++;
    while (n * (n + 1) / 2 < b)
        n++;
    t += (_m(m * (m + 1) / 2, b, 0) - a + 1) * m;
    if (m != n)
        t += (b - _m(n * (n - 1) / 2, a, 1)) * n;
    for (m++; m < n; m++)
        t += m * m;
    printf("%d", t);
    return 0;
}