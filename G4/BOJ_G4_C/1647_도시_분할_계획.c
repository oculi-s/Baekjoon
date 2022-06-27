#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int a, b, c;
} node;

int n, m, i, a, b, c, v, nx[100010];
node s[1000010];

int _c(node* a, node* b) {
	return a->c - b->c;
}

int _f(int a) {
	if (a == nx[a])
		return a;
	else
		return nx[a] = _f(nx[a]);
}

int main() {
	scanf("%d %d", &n, &m);
	for (i = 0; i < m; i++)
		scanf("%d %d %d", &s[i].a, &s[i].b, &s[i].c);
	qsort(s, m, sizeof(node), _c);
	for (i = 1; i <= n; i++)
		nx[i] = i;
	v = 0;
	for (i = 0; i < m; i++) {
		a = _f(s[i].a), b = _f(s[i].b);
		if (a != b)
			nx[a] = b, c += s[i].c, v = v > s[i].c ? v : s[i].c;
	}
	printf("%d", c - v);
	return 0;
}
