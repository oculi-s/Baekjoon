#include <stdio.h>

int n, m, a[100][100], i, j, s, y, x, z;

int _sum(int y, int x){
    int i, j, s = 0;
    for (i=y-1; i<=y+1; i++)
        for(j=x-1; j<=x+1; j++)
            s += a[i][j];
    return s;
}

int main(){
    scanf("%d %d", &n, &m);
    for (i=0; i<n; i++)
        for (j=0; j<m; j++)
            scanf("%d", &(a[i][j]));
    for (i=1; i<n-1; i++)
        for (j=1; j<m-1; j++){
            s = _sum(i, j);
            if (s > z)
                y = i, x = j, z = s;
        }
    printf("%d\n%d %d", z, y, x);
    return 0;
}
