#include <stdio.h>
#include <string.h>

char a[1001], b[1001];
int m[1001][1001], i, j, t, c, d;
void _r(int e, int x, int y){
    if (e > m[x][y]){
        m[x][y] = e;
        if (a[x] && b[y]){
            if (a[x] == b[y])
                _r(e+1, x+1, y+1);
            else
                _r(e, x+1, y), _r(e, x, y+1);
       }
    }
}

int main(){
    scanf("%s\n%s", a, b);
    _r(1, 0, 0);
    c = strlen(a), d = strlen(b);
    for (i=0; i<=c; i++)
        for (j=0; j<=d; j++)
            if (m[i][j]>t)
                t = m[i][j];
    printf("%d", t-1);
    return 0;
}
