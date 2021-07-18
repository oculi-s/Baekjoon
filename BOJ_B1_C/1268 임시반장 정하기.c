#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, k, v[1000][5], b[1000], m = 0;
    bool a[1000][1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            a[i][j] = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < 5; j++)
            scanf("%d", &v[i][j]);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            for (k = 0; k < 5; k++)
                if (v[i][k] == v[j][k]) {
                    a[i][j] = 1;
                    break;
                }
    for (i = 0; i < n; i++) {
        b[i] = 0;
        for (j = 0; j < n; j++)
            b[i] += a[i][j];
        m = m > b[i] ? m : b[i];
    }
    for (i = 0; i < n; i++)
        if (b[i] == m) {
            printf("%d", i + 1);
            break;
        }

    return 0;
}