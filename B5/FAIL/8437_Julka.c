#include <stdio.h>

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);
    printf("%d\n%d", (a + b) / 2, (a - b) / 2);
    return 0;
}