#include <stdio.h>

int n, m, a[52][52], b[52][52], i, j;
int r, c, d, e, t[4] = { 3,0,1,2 }, dy[4] = { -1,0,1,0 }, dx[4] = { 0,1,0,-1 };

void _r(int r, int c, int d) {
	b[r][c] = 1;
	if ((b[r - 1][c] || a[r - 1][c]) && (b[r + 1][c] || a[r + 1][c]) && (b[r][c - 1] || a[r][c - 1]) && (b[r][c + 1] || a[r][c + 1])) {
		if (!a[r - dy[d]][c - dx[d]])
			_r(r - dy[d], c - dx[d], d);
	}
	else {
		d = t[d];
		if (!b[r + dy[d]][c + dx[d]] && !a[r + dy[d]][c + dx[d]])
			_r(r + dy[d], c + dx[d], d);
		else
			_r(r, c, d);
	}
}

int main() {
	scanf("%d %d\n%d %d %d", &n, &m, &r, &c, &d);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf("%d", &(a[i][j]));
	_r(r, c, d);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			e += b[i][j];
	printf("%d", e);
	return 0;
}
