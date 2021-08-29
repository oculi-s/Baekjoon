#include <stdio.h>

int p[1001][1001], m, n, a, b, i, j, c;

void _rec(int y, int x) {
	p[y][x] = 0, p[x][y] = 0;
	int i;
	for (i = 1; i <= n; i++) {
		if (p[i][x])
			_rec(i, x);
		if (p[y][i])
			_rec(y, i);
	}
}

int main() {
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
		p[i][i] = 1;
	for (i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		p[a][b] = 1, p[b][a] = 1;
		p[a][a] = 0, p[b][b] = 0;
	}
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (p[i][j])
				_rec(i, j), c++;
	printf("%d", c);
	return 0;
}