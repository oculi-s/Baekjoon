#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int n, v;
} node;

node b[100];
char t;
int n, m, i, j, a[100], d, e;

int _c(node *a, node *b){
	if (a->v == b->v)
		return a->n-b->n;
	else
		return b->v-a->v;
}

int main(){
	scanf("%d %d", &n, &m);
	for (i=0; i<n; i++)
		scanf("%d", a+i);
	for (i=0; i<m; i++){
		scanf("%d", &(b[i].n));
		for (j=0; j<n; j++){
			scanf(" %c", &t);
			if (t=='O')
				b[i].v += a[j];
		}
	}
	qsort(b, m, sizeof(node), _c);
	printf("%d %d", b[0].n, b[0].v);
	return 0;
}
