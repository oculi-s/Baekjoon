#include <stdio.h>
#include <stdbool.h>
#define M 501

int main() {
	bool G[M][M], A[M], B[M];
	int i, n, m, x, y, c = 0;
	scanf("%d\n%d", &n, &m);
	for (y = 1; y <= n; y++)
		for (x = 1; x <= n; x++)
			G[y][x] = 0, A[y] = 0, B[y] = 0;
	for (i = 0; i < m; i++) {
		scanf("%d %d", &x, &y);
		G[x][y] = 1, G[y][x] = 1;
	}
	for (i = 2; i <= n; i++)
		if (G[1][i])
			A[i] = 1, c++;
	if (c != 0) {
		for (y = 2; y <= n; y++)
			if (A[y])
				for (x = 2; x <= n; x++)
					if (G[x][y] && !B[x] && !A[x])
						c++, B[x] = 1;
	}
	printf("%d", c);
	return 0;
}