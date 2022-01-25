#include <stdio.h>
#include <stdlib.h>

int t, n, x[8], y[8], c, i, j, m;

int _c(int *a, int *b){
    return *a-*b;
}

int _d(int *a, int *b){
    return *b-*a;
}

int main(){
    scanf("%d", &t);
    while(t--){
        m = 0;
        scanf("%d", &n);
        for (i=0; i<n; i++)
            scanf("%d", x+i);
        for (i=0; i<n; i++)
            scanf("%d", y+i);
        qsort(x, n, sizeof(int), _c);
        qsort(y, n, sizeof(int), _d);
        for (i=0; i<n; i++)
            m += x[i]*y[i];
        printf("Case #%d: %d\n", ++c, m);
    }
    return 0;
}
