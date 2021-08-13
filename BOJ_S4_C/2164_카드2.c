#include <stdio.h>
#include <stdlib.h>

typedef struct cd {
	int t;
	int b;
} cd;

cd c[500001];

int main() {
	int n, i, t;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		c[i].t = i - 1, c[i].b = i + 1;
	c[1].t = n, c[n].b = 1, t = 1;
	while (t != c[t].b)
		c[c[t].t].b = c[t].b, c[c[t].b].t = c[t].t, t = c[c[t].b].b;
	printf("%d", c[t].t);
	return 0;
}