#include <stdio.h>
#include <string.h>

int t, i, d, c;
char s[10200], p[101];

int cmp(char *a){
    int i;
    for (i=0; i<d; i++)
        if (p[i] != a[i])
            return 1;
    return 0;
}

int main() {
    scanf("%d", &t);
    while(t--){
        scanf("%s %s", s, p);
        i = 0, c = 0, d = strlen(p);
        while (s[i]){
            if (cmp(s+i))
                i++, c++;
            else
                i += d, c++;
        }
        printf("%d\n", c);
    }
}