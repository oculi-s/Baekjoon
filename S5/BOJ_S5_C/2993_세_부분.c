#include <stdio.h>
#include <string.h>

char s[51], t[51], m[51];
int i, j, k, n;
int main() {
    scanf("%s", s);
    n = strlen(s);
    for (i=0; i<n; i++)
        m[i] = s[i], t[i] = 'z';
    for (i=0; i<n-2; i++){
        for (j=0; j<=i; j++)
            t[j] = s[i-j];
        for (j=i+1; j<n-1; j++){
            for (k=i+1; k<=j; k++)
                t[k] = s[j+i+1-k];
            for (k=j+1; k<n; k++)
                t[k] = s[n+j-k];
            if (strcmp(t, m) < 0)
                strcpy(m, t);
        }
    }
    printf("%s", m);
}