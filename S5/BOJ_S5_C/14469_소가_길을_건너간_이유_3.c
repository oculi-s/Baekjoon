#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int s, t;
} node;

int _max(int a, int b) {
	return a > b ? a : b;
}

int c(node* a, node* b) {
	return (*a).s - (*b).s;
}

node s[100];
int n, i, v;
int main() {
	scanf("%d", &n);
	for (; i < n; i++)
		scanf("%d %d", &s[i].s, &s[i].t);
	qsort(s, n, sizeof(node), c);
	for (i = 0; i < n; i++)
		v = _max(v, s[i].s) + s[i].t;
	printf("%d", v);
	return 0;
}