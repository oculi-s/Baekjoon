#include <stdio.h>
#include <stdbool.h>

bool P[201][201];
int main() {
	int n, m, i, x, y, c = 0;
	scanf("%d %d", &n, &m);
	for (x = 1; x <= n; x++)
		for (y = 1; y <= n; y++)
			P[x][y] = 1;
	for (i = 0; i < m; i++)
		scanf("%d %d", &x, &y), P[x][y] = 0, P[y][x] = 0;
	for (i = 1; i <= n; i++)
		for (x = i + 1; x <= n; x++)
			for (y = x + 1; y <= n; y++)
				if (P[i][x] && P[x][y] && P[i][y])
					c++;
	printf("%d", c);
	return 0;
}