#include <stdio.h>

int n, a[50000], b[50000], i, t, v;
int main(){
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d %d", a+i, b+i);
    for (i=0; i<n; i++){
        v = t%(a[i]+b[i]);
        if (v < b[i])
            t += b[i]-v;
        t++;
    }
    printf("%d", t);
    return 0;
}
