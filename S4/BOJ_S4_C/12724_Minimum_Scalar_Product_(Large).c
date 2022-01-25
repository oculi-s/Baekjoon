#include <stdio.h>
#include <stdlib.h>

typedef long long Int;
Int t, n, x[800], y[800], c, i, j, m;

Int _c(Int *a, Int *b){
    return *a-*b;
}

Int _d(Int *a, Int *b){
    return *b-*a;
}

int main(){
    scanf("%lld", &t);
    while(t--){
        m = 0;
        scanf("%lld", &n);
        for (i=0; i<n; i++)
            scanf("%lld", x+i);
        for (i=0; i<n; i++)
            scanf("%lld", y+i);
        qsort(x, n, sizeof(Int), _c);
        qsort(y, n, sizeof(Int), _d);
        for (i=0; i<n; i++)
            m += x[i]*y[i];
        printf("Case #%lld: %lld\n", ++c, m);
    }
    return 0;
}
