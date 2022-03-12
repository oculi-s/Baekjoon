#include <stdio.h>

unsigned long long n, a[101][201], b[101][201], i, j, x, y;

int main() {
    scanf("%llu", &n);
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
            scanf("%llu", &a[i][j]);
    b[1][1] = 1;
    for (j=1; j<=2*n; j++)
        for (i=1; i<=n; i++){
            for (y=1; y<i; y++)
                if (a[y][j] == i-y)
                    b[i][j] += b[y][j];
            for (x=1; x<j; x++)
                if (a[i][x] == j-x)
                    b[i][j] += b[i][x];
        }
    printf("%llu", b[n][n]);
}