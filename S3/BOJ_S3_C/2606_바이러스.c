#include <stdio.h>
#include <stdlib.h>

void dfs(int* s, int* v, int* c, int* G, int N) {
	int i, j = 0, x, y;
	for (i = N - 1; i > -1; i--)
		c[i] = 0;
	s[++i] = 0;
	while (i > -1) {
		x = s[i--];
		if (!c[x])
			(*v)++;
		c[x] = 1;
		for (y = N - 1; y > -1; y--)
			if (x != y)
				if (!c[y])
					if (*(G + x * N + y) == 1)
						s[++i] = y;
	}
}

int main() {
	int n, m, i, a, b;
	scanf("%d", &n);
	scanf("%d", &m);
	int* G = malloc(sizeof(int) * n * n);
	for (i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		a--, b--;
		*(G + a * n + b) = 1;
		*(G + b * n + a) = 1;
	}
	int* s = malloc(sizeof(int) * n * n);
	int* c = malloc(sizeof(int) * n);
	int* v = malloc(sizeof(int));
	*v = 0;
	dfs(s, v, c, G, n);
	printf("%d", *v - 1);
	return 0;
}