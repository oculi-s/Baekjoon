#include <stdio.h>

int n, i, a[1000000], e;
int _c(int n){
    int c[10] = {0,};
    while(n){
        if (c[n%10])
            return 0;
        c[n%10] = 1, n/=10;
    }
    return 1;
}

int main(){
    n = 1000000;
    for (i=1; n; i++)
        if (_c(i))
            a[e++] = i, n--;
    scanf("%d", &n);
    while(n){
        printf("%d\n", a[n-1]);
        scanf("%d", &n);
    }
    return 0;
}
