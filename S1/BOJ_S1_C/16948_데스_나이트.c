#include <stdio.h>

int n, m[200][200], i, j, y[6] = { -2,-2,0,0,2,2 }, x[6] = { -1,1,-2,2,-1,1 }, r1, c1, r2, c2;

void _r(int r, int c, int v) {
	int i;
	if (r >= 0 && c >= 0 && r < n && c < n)
		if (m[r][c] > v) {
			m[r][c] = v;
			for (i = 0; i < 6; i++)
				_r(r + y[i], c + x[i], v + 1);
		}
}

int main() {
	scanf("%d\n%d %d %d %d", &n, &r1, &c1, &r2, &c2);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			m[i][j] = 1e9;
	_r(r1, c1, 0);
	if (m[r2][c2] == 1e9)
		m[r2][c2] = -1;
	printf("%d", m[r2][c2]);
	return 0;
}
