#include <stdio.h>
#include <stdlib.h>

int main() {
	int m, n, k, i, j, c = 0;
	scanf("%d %d %d", &m, &n, &k);
	int p[7][7];
	char s[10];
	for (i = 0; i < m + 2; i++)
		for (j = 0; j < n + 2; j++)
			p[i][j] = !(i == 0 || j == 0 || i == m + 1 || j == n + 1);
	for (i = 1; i <= m; i++) {
		scanf("%s", s);
		for (j = 1; j <= n; j++)
			if (*(s + j - 1) == 'T')
				p[i][j] = 0;
	}
	int d[2000][60], x = 1, y = m, v = 1, e = 0;
	int t[60];
	n += 2, m += 2;
	for (i = 0; i < m * n; i++)
		d[0][i + 3] = 0;
	d[0][y * n + x + 3] = 1, d[0][0] = v, d[0][1] = x, d[0][2] = y;
	while (e >= 0) {
		for (i = 0; i < m * n; i++)
			t[i] = d[e][i];
		v = t[0], x = t[1], y = t[2], e--;
		if (v == k) {
			if (y == 1 && x == n - 2)
				c++;
		}
		else {
			if (t[(y + 1) * n + x + 3] == 0 && p[y + 1][x] == 1) {
				++e, d[e][0] = v + 1, d[e][1] = x, d[e][2] = y + 1;
				for (i = 0; i < m * n; i++)
					d[e][i + 3] = t[i + 3];
				d[e][(y + 1) * n + x + 3] = 1;
			}
			if (t[(y - 1) * n + x + 3] == 0 && p[y - 1][x] == 1) {
				++e, d[e][0] = v + 1, d[e][1] = x, d[e][2] = y - 1;
				for (i = 0; i < m * n; i++)
					d[e][i + 3] = t[i + 3];
				d[e][(y - 1) * n + x + 3] = 1;
			}
			if (t[y * n + x + 1 + 3] == 0 && p[y][x + 1] == 1) {
				++e, d[e][0] = v + 1, d[e][1] = x + 1, d[e][2] = y;
				for (i = 0; i < m * n; i++)
					d[e][i + 3] = t[i + 3];
				d[e][y * n + x + 1 + 3] = 1;
			}
			if (t[y * n + x - 1 + 3] == 0 && p[y][x - 1] == 1) {
				++e, d[e][0] = v + 1, d[e][1] = x - 1, d[e][2] = y;
				for (i = 0; i < m * n; i++)
					d[e][i + 3] = t[i + 3];
				d[e][y * n + x - 1 + 3] = 1;
			}
		}
	}
	printf("%d", c);
	return 0;
}