#include <stdio.h>
#include <stdlib.h>

void dfs(int* s, int* v, int* m, int* G, int N, int V) {
	int i, j = 0, x, y;
	for (i = N - 1; i > -1; i--)
		m[i] = 0;
	s[++i] = --V;
	while (i > -1) {
		x = s[i--];
		if (!m[x])
			v[j++] = x + 1;
		m[x] = 1;
		for (y = N - 1; y > -1; y--)
			if (x != y)
				if (!m[y])
					if (*(G + x * N + y) == 1)
						s[++i] = y;
	}
}

void bfs(int* s, int* v, int* m, int* G, int N, int V, int M) {
	int i, j = 0, k = 0, x, y;
	for (i = N - 1; i > -1; i--)
		m[i] = 0;
	s[++i] = --V;
	while (1) {
		x = s[k++];
		if (x < 0 || k > M * 2)
			break;
		if (!m[x])
			v[j++] = x + 1;
		m[x] = 1;
		for (y = 0; y < N; y++)
			if (x != y)
				if (!m[y])
					if (*(G + x * N + y) == 1)
						s[++i] = y;
	}
}

int main() {
	int N, M, V, a, b, i, j;
	scanf("%d %d %d", &N, &M, &V);
	int* G = malloc(sizeof(int) * N * N);
	int* s = malloc(sizeof(int) * M * 2);
	int* v = malloc(sizeof(int) * N);
	int* m = malloc(sizeof(int) * N);
	for (i = 0; i < M; i++) {
		scanf("%d %d", &a, &b);
		*(G + (a - 1) * N + (b - 1)) = 1;
		*(G + (b - 1) * N + (a - 1)) = 1;
	}
	dfs(s, v, m, G, N, V);
	for (i = 0; i < N; i++)
		if (v[i] > 0)
			printf("%d ", v[i]);
	printf("\n");
	bfs(s, v, m, G, N, V, M);
	for (i = 0; i < N; i++)
		if (v[i] > 0)
			printf("%d ", v[i]);
	return 0;
}