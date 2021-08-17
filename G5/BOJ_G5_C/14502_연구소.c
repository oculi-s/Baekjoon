#include <stdio.h>

int x[10][10], t[10][10], dx[4] = { -1,1,0,0 }, dy[4] = { 0,0,-1,1 };
void _spread(int t[10][10], int i, int j, int n, int m) {
	int k;
	for (k = 0; k < 4; k++)
		if (!t[i + dy[k]][j + dx[k]])
			t[i + dy[k]][j + dx[k]] = 2, _spread(t, i + dy[k], j + dx[k], n, m);
}

int _safe(int n, int m, int a, int b, int c) {
	int i, j, s = 0;
	for (i = 0; i <= n + 1; i++)
		for (j = 0; j <= m + 1; j++)
			t[i][j] = x[i][j];
	t[a / m + 1][a % m + 1] = 1;
	t[b / m + 1][b % m + 1] = 1;
	t[c / m + 1][c % m + 1] = 1;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			if (t[i][j] == 2)
				_spread(t, i, j, n, m);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			s += t[i][j] == 0;
	return s;
}

int main() {
	int n, m, i, j, k, t, a = 0;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n + 2; i++)
		x[i][0] = 1, x[i][m + 1] = 1;
	for (i = 0; i < m + 2; i++)
		x[0][i] = 1, x[n + 1][i] = 1;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf("%d", &x[i][j]);
	for (i = 0; i < n * m; i++)
		if (!x[i / m + 1][i % m + 1])
			for (j = i + 1; j < n * m; j++)
				if (!x[j / m + 1][j % m + 1])
					for (k = j + 1; k < n * m; k++)
						if (!x[k / m + 1][k % m + 1])
							t = _safe(n, m, i, j, k), a = a > t ? a : t;
	printf("%d", a);
	return 0;
}