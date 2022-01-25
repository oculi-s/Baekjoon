#include <stdio.h>

int n, a[10000], i, j, d;
int main(){
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d", a+i);
    for (i=0; i<n; i++)
        for (j=i+1; j<n; j++)
            if (a[j]-a[i]>d)
                d = a[j]-a[i];
    printf("%d", d);
    return 0;
}
