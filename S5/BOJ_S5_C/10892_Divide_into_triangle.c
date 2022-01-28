#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int i, x, y;
} node;

int _c(node *a, node *b){
    if (a->y == b->y)
        return a->x - b->y;
    else
        return a->y - b->y;
}

node s[900];
int n, i;
int main(){
    scanf("%d", &n);
    for (i=0; i<3*n; i++)
        scanf("%d %d", &(s[i].x), &(s[i].y)), s[i].i = i+1;
    qsort(s, 3*n, sizeof(node), _c);
    for (i=0; i<n; i++)
        printf("%d %d %d\n", s[3*i].i, s[3*i+1].i, s[3*i+2].i);
    return 0;
}
