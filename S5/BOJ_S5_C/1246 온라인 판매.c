#include <stdio.h>

void _qsort(int *s, int n) {
    if (n > 0) {
        int L = 1, H = n - 1, t;
        while (L) {
            while (L < n && s[0] >= s[L]) {
                L++;
            }
            while (0 < H && s[0] <= s[H]) {
                H--;
            }
            if (L >= H)
                L = 0;
            t = s[L], s[L] = s[H], s[H] = t;
        }
        _qsort(s, H);
        _qsort(s + H + 1, n - H - 1);
    }
}

int main() {
    int n, m, t[1000], i, a = 0, b = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++)
        scanf("%d", t + i);
    _qsort(t, m);
    for (i = 0; i < n; i++)
        if (m - (n - i) >= 0)
            if (t[m - (n - i)] * (n - i) > a)
                a = t[m - (n - i)] * (n - i), b = t[m - (n - i)];
    printf("%d %d", b, a);
    return 0;
}