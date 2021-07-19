#include <stdio.h>

int main() {
    int i, n = 0, d1 = 0, d2 = 1;
    char a[50], t1, t2;
    scanf("%s", a);
    while (a[n++]);
    n--;
    for (i = 0, t1 = a[0]; i < n - 2; i++)
        if (a[i] < t1)
            t1 = a[i], d1 = i;
    while (a[d1 + 1] == a[d1]) {
        if (d1 == n - 3)
            break;
        d1++;
    }
    for (i = d1 + 1, t2 = a[d1 + 1]; i < n - 1; i++)
        if (a[i] < t2)
            t2 = a[i], d2 = i;
    while (a[d2 + 1] == a[d2]) {
        if (d2 == n - 2)
            break;
        d2++;
    }
    printf("%d %d %d\n", d1, d2, n - 1);
    for (i = d1; i >= 0; i--)
        printf("%c", a[i]);
    for (i = d2; i > d1; i--)
        printf("%c", a[i]);
    for (i = n - 1; i > d2; i--)
        printf("%c", a[i]);
    return 0;
}