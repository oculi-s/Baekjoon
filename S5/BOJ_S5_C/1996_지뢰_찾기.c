#include <stdio.h>

int n, i, j, a[1002][1002];
char s[1001], b[1002][1002];

char _count(int i, int j){
    int x, y, t = 0;
    for (y=i-1; y<=i+1; y++)
        for (x=j-1; x<=j+1; x++)
            t += a[y][x];
    return t>9?'M':t+'0';
}

int main(){
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        scanf("%s", s);
        for (j=1; j<=n; j++)
            if (s[j-1] != '.')
                a[i][j] = s[j-1]-'0';
    }
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
            if (a[i][j])
                b[i][j] = '*';
            else
                b[i][j] = _count(i, j);
    for (i=1; i<=n; i++)
        printf("%s\n", b[i]+1);
    return 0;
}
