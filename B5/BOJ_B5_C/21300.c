#include <stdio.h>

int main() {
    int n, a = 0, i;
    for (i = 0; i < 6; i++)
        scanf("%d", &n), a += 5 * n;
    printf("%d", a);
    return 0;
}