#include <stdio.h>
#define N 1000

int p, w, c, v, x, y, z;
int a[N][N], b[N], d[N];

void _r(int s, int m, int t[N]) {
	int i;
	if (b[s] < m) {
		b[s] = m;
		for (i = 0; i < p; i++)
			if (a[s][i] && !t[i]) {
				t[i] = 1;
				_r(i, m < a[s][i] ? m : a[s][i], t);
				t[i] = 0;
			}
	}
}

int main() {
	scanf("%d %d\n%d %d", &p, &w, &c, &v);
	while (w--) {
		scanf("%d %d %d", &x, &y, &z);
		if (z > a[x][y] || !a[x][y])
			a[x][y] = z, a[y][x] = z;
	}
	_r(c, 1e9, d);
	printf("%d ", b[v]);
	return 0;
}
