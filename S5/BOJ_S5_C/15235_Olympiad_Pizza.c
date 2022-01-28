#include <stdio.h>

int n, i, a[1000], b[1000], c[1000], t, k;
int main(){
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d", a+i);
    while(!k){
        k = 1;
        for (i=0; i<n; i++)
            if (b[i]<a[i])
                b[i]++, t++, k = 0, c[i] = t;
    }
    for (i=0; i<n; i++)
        printf("%d ", c[i]);
    return 0;
}
