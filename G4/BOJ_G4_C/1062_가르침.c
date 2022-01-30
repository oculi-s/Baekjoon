#include <stdio.h>

int n, i, j, k, a[26][50], m, b[50], c[26], d, e;
char t[16];

void _r(int k, int c, int e, int t[50]){
    int i, j, b[50], d;
    if (k){
        for (i=e; i<=26-k; i++){
            d = c;
            for (j=0; j<n; j++)
                if (a[i][j] && t[j]){
                    b[j] = t[j]-1;
                    if (!b[j])
                        d++;
                } else
                    b[j] = t[j];
            _r(k-1, d, i+1, b);
        }
    } else if (m < c)
        m = c;
}

int _in(char a){
    if (a == 'a')
        return 0;
    else if (a == 'c')
        return 0;
    else if (a == 'i')
        return 0;
    else if (a == 'n')
        return 0;
    else if (a == 't')
        return 0;
    else
        return 1;
}

int main(){
    scanf("%d %d", &n, &k);
    for (i=0; i<n; i++){
        scanf("%s", t);
        for (j=4; t[j+4]; j++)
            if (_in(t[j]))
                a[t[j]-'a'][i] = 1;
        for (j=0; j<26; j++)
            c[j] += a[j][i];
    }
    for (i=0; i<26; i++)
        if (c[i])
            d++;
    if (k >= 5){
        if (k-5 < d){
            for (i=0; i<n; i++){
                for (j=0; j<26; j++)
                    if (a[j][i])
                        b[i]++;
                if (!b[i])
                    e++;
            }
            _r(k-5, e, 0, b);
        } else
            m = n;
    }
    printf("%d", m);
    return 0;
}
