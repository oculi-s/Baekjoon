#include <stdio.h>
#include <stdlib.h>

int main() {
    int c, n;
    int t[40];
    t[0] = 0, t[1] = 1;
    for (int i = 2; i < 41; i++)
        t[i] = t[i - 1] + t[i - 2];
    scanf("%d", &c);
    for (int i = 0; i < c; i++) {
        scanf("%d", &n);
        if (n == 0)
            printf("%d %d\n", 1, t[0]);
        else
            printf("%d %d\n", t[n-1], t[n]);
    }
    return 0;
}