#include <stdio.h>

int main() {
    int n, a = 0;
    for (int i = 0; i < 4; i++)
        scanf("%d", &n), a += n;
    printf("%d\n%d", a / 60, a % 60);
    return 0;
}