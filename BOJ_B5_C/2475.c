#include <stdio.h>

int main() {
    int t, s = 0;
    for (int i = 0; i < 5; i++)
        scanf("%d", &t), s += t * t;
    printf("%d", s % 10);
    return 0;
}