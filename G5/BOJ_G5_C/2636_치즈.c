#include <stdio.h>

int n, m, i, j, a[102][102], b[102][102], c[102][102], d, e, t;
int y[4] = { -1,1,0,0 }, x[4] = { 0,0,-1,1 };

void _r(int i, int j) {
	c[i][j] = 1;
	int k, ny, nx;
	for (k = 0; k < 4; k++) {
		ny = i + y[k], nx = j + x[k];
		if (!c[ny][nx]) {
			if (a[ny][nx] == 1)
				b[ny][nx] = 0;
			else if (a[ny][nx] == 0)
				_r(ny, nx);
		}
	}
}

int main() {
	scanf("%d %d", &n, &m);
	for (i = 0; i <= n + 1; i++)
		for (j = 0; j <= m + 1; j++)
			a[i][j] = -1, b[i][j] = -1;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf("%d", &(a[i][j])), b[i][j] = a[i][j], d += a[i][j];
	while (d) {
		e = d, d = 0, _r(1, 1);
		for (i = 1; i <= n; i++)
			for (j = 1; j <= m; j++)
				a[i][j] = b[i][j], c[i][j] = 0, d += b[i][j];
		t++;
	}
	printf("%d\n%d", t, e);
	return 0;
}
