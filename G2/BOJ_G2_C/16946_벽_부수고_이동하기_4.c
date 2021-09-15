#include <stdio.h>

char s[1001];
int n, m, i, j, c[1002][1002], v[1002][1002], d, t = 2;
int dy[4] = { -1,1,0,0 }, dx[4] = { 0,0,-1,1 };

void count(int y, int x) {
	int k, l, nx, ny;
	for (k = 0; k < 4; k++) {
		nx = x + dx[k], ny = y + dy[k];
		if (c[ny][nx] > 0 && v[ny][nx] == t) {
			c[ny][nx] += d, v[ny][nx] = 0;
		}
		else if (v[ny][nx] == t)
			v[ny][nx] = -1, count(ny, nx);
	}
}

int zero(int y, int x, int d) {
	int k, nx, ny;
	for (k = 0; k < 4; k++) {
		nx = x + dx[k], ny = y + dy[k];
		if (!c[ny][nx] && !v[ny][nx])
			v[ny][nx] = t, d = zero(ny, nx, d + 1);
		else if (!v[ny][nx])
			v[ny][nx] = t;
	}
	return d;
}

int main() {
	scanf("%d %d", &n, &m);
	for (i = 0; i <= n + 1; i++)
		c[i][0] = -1, c[i][m + 1] = -1, v[i][0] = -1, v[i][m + 1] = -1;
	for (i = 0; i <= m + 1; i++)
		c[0][i] = -1, c[n + 1][i] = -1, v[0][i] = -1, v[n + 1][i] = -1;
	for (i = 1; i <= n; i++) {
		scanf("%s", s);
		for (j = 1; j <= m; j++)
			c[i][j] = s[j - 1] == '1';
	}
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			if (!c[i][j] && !v[i][j]) {
				v[i][j] = -1;
				d = zero(i, j, 1);
				count(i, j);
				t++;
			}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++)
			printf("%d", c[i][j] % 10);
		printf("\n");
	}
	return 0;
}