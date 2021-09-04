#include <stdio.h>

typedef struct {
	int p, n;
}node;

node x[110];
int t, i, n, p = 1;
int main() {
	scanf("%d\n%d", &n, &t);
	x[0].p = -1, x[0].n = 1, x[1].n = 101, x[101].p = 1, x[101].n = -1;
	for (i = 2; i <= n; i++) {
		scanf("%d", &t);
		while (t--)
			p = x[p].p;
		x[x[p].n].p = i, x[i].n = x[p].n, x[p].n = i, x[i].p = p;
		while (x[p].n != -1)
			p = x[p].n;
		p = x[p].p;
	}
	p = x[0].n;
	while (x[p].n != -1)
		printf("%d ", p), p = x[p].n;
	return 0;
}