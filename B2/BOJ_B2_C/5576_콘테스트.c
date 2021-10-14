#include <stdio.h>
#include <stdlib.h>

int c(int *a, int *b) {
    return *b - *a;
}

int a[10], b[10], i;
int main() {
    for (i = 0; i < 10; i++)
        scanf("%d", a + i);
    for (i = 0; i < 10; i++)
        scanf("%d", b + i);
    qsort(a, 10, 4, c);
    qsort(b, 10, 4, c);
    printf("%d %d", a[0] + a[1] + a[2], b[0] + b[1] + b[2]);
    return 0;
}