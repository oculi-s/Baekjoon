#include <stdio.h>

int n, a[5001], i, u, d, m;
int main(){
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d", a+i);
    for (i=0; i+1<n;){
        u = 1, d = 1;
        if (a[i]==a[i+1])
            i++;
        while (a[i]<a[i+1] && i+1<n)
            u++, i++;
        while (a[i]>a[i+1] && i+1<n)
            d++, i++;
        if (u+d-1>m)
            m = u+d-1;
    }
    printf("%d", n==1?1:m);
    return 0;
}
