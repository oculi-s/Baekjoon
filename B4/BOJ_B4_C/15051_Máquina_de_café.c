#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    scanf("%d %d %d", &a, &b, &c);
    d = a * 2 + c * 2;
    e = a * 4 + b * 2;
    f = b * 2 + c * 4;
    printf("%d", d < e&& d < f ? d : e < f ? e : f);
    return 0;
}