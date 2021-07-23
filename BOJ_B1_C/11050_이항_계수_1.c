#include <stdio.h>

int main() {
    double n, k, c = 1;
    scanf("%f %f", &n, &k);
    while (k)
        c *= (n - k + 1) / k, k--;
    printf("%.0f", c);
    return 0;
}