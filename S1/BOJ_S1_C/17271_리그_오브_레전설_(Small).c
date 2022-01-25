#include <stdio.h>
#define D 1000000007

int i, n, m, v, c[10001][5001];

int main() {
    for (n=1; n<=5000; n++)
        c[n][n] = 1;
    for (n=1; n<=10000; n++)
        c[n][0] = 1;
    for (n=2; n<=10000; n++)
        for (m=1; m<=5000; m++)
            c[n][m] = (c[n-1][m-1]+c[n-1][m])%D;
    scanf("%d %d", &n, &m);
    for (i=0; n>=m*i; i++)
        v = (v+c[n-(m-1)*i][i])%D;
    printf("%d", v);
    return 0;
}
