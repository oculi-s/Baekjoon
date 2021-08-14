#include <stdio.h>

void _mulm(int a[5][5], int b[5][5], int c[5][5], int n) {
	int i, j, k;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) {
			c[i][j] = 0;
			for (k = 0; k < n; k++)
				c[i][j] += a[i][k] * b[k][j];
			c[i][j] %= 1000;
		}
}

void _dupm(int a[5][5], int b[5][5], int n) {
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = b[i][j];
}

int main() {
	int a[5][5], b[5][5], c[5][5], d[5][5], e[5][5], n, i, j;
	long long m, t;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			a[i][j] = 0, b[i][j] = 0, c[i][j] = 0, d[i][j] = 0, e[i][j] = 0;
	scanf("%d %lld", &n, &m);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < n; i++)
		d[i][i] = 1;
	while (m) {
		t = 1;
		_dupm(b, a, n);
		while (m >= t * 2)
			t *= 2, _mulm(b, b, c, n), _dupm(b, c, n);
		m -= t, _mulm(b, d, e, n), _dupm(d, e, n);
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", d[i][j]);
		printf("\n");
	}
	return 0;
}