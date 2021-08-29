#include <stdio.h>
#include <stdlib.h>

int n, m, i, j, x[10000], a[10000];
int* _c(int* a, int* b) {
    return *a - *b;
}

int _bisect(int v, int r) {
    int l = 0, m;
    while (l < r) {
        m = (l + r) / 2;
        if (v < x[m])
            r = m;
        else
            l = m + 1;
    }
    return r;
}

int main() {
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", x + i);
    scanf("%d", &m);
    qsort(x, n, sizeof(int), _c);
    a[0] = x[0];
    for (i = 1; i < n; i++)
        a[i] += x[i] + a[i - 1];
    i = x[n - 1];
    while (1) {
        j = _bisect(i, n);
        if (a[j - 1] + i * (n - j) <= m)
            break;
        i--;
    }
    printf("%d", i);
    return 0;
}