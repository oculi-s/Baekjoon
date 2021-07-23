#include <stdio.h>

int main() {
    double n, k, c = 1;
    scanf("%lf %lf", &n, &k);
    while (k > 1)
        k--, c *= (n - k) / k;
    printf("%.0lf", c);
    return 0;
}