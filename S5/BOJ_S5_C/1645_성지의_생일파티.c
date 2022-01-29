#include <stdio.h>
#include <stdlib.h>

int n, i, a[10000];

int _c(int *a, int *b){
    return *a-*b;
}

int main(){
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d", a+i);
    qsort(a, n, sizeof(int), _c);
    i = 0;
    while(1){
        while(a[i] == a[i+1])
            i++;
        if (a[i] < i+1)
            break;
        else
            i++;
    }
    printf("%d", a[i]+1);
    return 0;
}
