#include <stdio.h>
unsigned short H[500][500];

int _time(int v, int n, int m) {
	int t = 0, i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			t += H[i][j] > v ? (H[i][j] - v) * 2 : (v - H[i][j]);
	return t;
}

int main() {
	int n, m, v, i, j, a = 257, b = 0, t, h, c, s = 0;
	scanf("%d %d %d", &n, &m, &v);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++) {
			scanf("%hd", &t), H[i][j] = t, s += t;
			a = a < t ? a : t, b = b > t ? b : t;
		}
	t = b * n * m * 2;
	for (i = a - 1; i <= b; i++) {
		if (s + v >= i * n * m) {
			c = _time(i, n, m);
			if (c <= t)
				t = c, h = i;
		}
	}
	printf("%d %d", t, h);
	return 0;
}