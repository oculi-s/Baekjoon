#include <stdio.h>
#include <string.h>

char a[20][21], t[21];
int i, n, m, g, s[2];

int main(){
    scanf("%d %d %d", &n, &m, &g);
    for (i=0; i<n; i++)
        scanf("%s", a[i]);
    for (i=0; i<m; i++)
        scanf("%s", t);
    while(g--){
        scanf("%s", t);
        for (i=0; i<n; i++)
            if (!strcmp(t, a[i]))
                break;
        s[i==n]++;
    }
    printf("%s", s[0]==s[1]?"TIE":s[0]>s[1]?"A":"B");
    return 0;
}
