#include <stdio.h>
#include <stdlib.h>

int x[500000];
int* _c(int* a, int* b) {
	return *a - *b;
}

typedef struct cd {
	int v;
	int c;
} cd;

cd c[500000];

int _bisect(int v, int r) {
	int l = 0, m;
	while (l < r) {
		m = (l + r) / 2;
		if (c[m].v >= v)
			r = m;
		else
			l = m + 1;
	}
	return r;
}

int main() {
	int n, i, t, e = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", x + i);
	qsort(x, n, sizeof(int), _c);
	c[0].c = 1, c[0].v = x[0];
	for (i = 1; i < n; i++)
		if (x[i - 1] == x[i])
			c[e].c++;
		else
			e++, c[e].v = x[i], c[e].c = 1;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &t);
		i = _bisect(t, e);
		if (c[i].v == t)
			printf("%d ", c[i].c);
		else
			printf("0 ");
	}
	return 0;
}