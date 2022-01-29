#include <stdio.h>

int c, r, i, j;
char s[102][102];

void _c(int y, int x){
    int i, j;
    for (i=y-1; i<=y+1; i++)
        for (j=x-1; j<=x+1; j++)
            if (s[i][j] != '*' && s[i][j])
                s[i][j]++;
}

int main(){
    scanf("%d %d", &r, &c);
    while(r&&c){
        for (i=1; i<=r; i++){
            scanf("%s", s[i]+1);
            for (j=1; j<=c; j++)
                if (s[i][j] == '.')
                    s[i][j] = '0';
        }
        for (i=1; i<=r; i++)
            for (j=1; j<=c; j++)
                if (s[i][j] == '*')
                    _c(i, j);
        for (i=1; i<=r; i++)
            printf("%s\n", s[i]+1);
        scanf("%d %d", &r, &c);
    }
    return 0;
}
