#include <stdio.h>

double _comb(double n, double k) {
    double t = 1, i = 0;
    for (; i < k; i++)
        t *= (n - (k - i) + 1) / (k - i);
    return t;
}

int main() {
    double n, m, k, s = 0;
    scanf("%lf %lf %lf", &n, &m, &k);
    for (; k <= m; k++)
        if (n - m >= m - k)
            s += _comb(m, k) * _comb(n - m, m - k);
    printf("%.15lf", s / _comb(n, m));
    return 0;
}