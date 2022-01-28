#include <stdio.h>
#include <stdlib.h>

int _c(int *a, int *b){
    return *a-*b;
}

int n, i, a[5000], m, c;
int main(){
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d", a+i);
    qsort(a, n, sizeof(int), _c);
    m = 1e9;
    for (i=1; i<n; i++)
        if (a[i]-a[i-1] < m)
            m = a[i]-a[i-1];
    for (i=1; i<n; i++)
        if (a[i]-a[i-1] == m)
            c++;
    printf("%d %d", m, c);
    return 0;
}
