#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, m, n, o;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    m = (b + d) - (a + c);
    n = (a + d) - (b + c);
    n = n > 0 ? n : -n;
    printf("%d", m < n ? m : n);
    return 0;
}