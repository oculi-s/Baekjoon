#include <stdio.h>
#define M 100

void _mulm(int a[M][M], int b[M][M], int c[M][M], int n, int m) {
	int i, j, k;
	long long t;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) {
			t = 0;
			for (k = 0; k < n; k++)
				t += a[i][k] * b[k][j];
			c[i][j] = t % m;
		}
}

void _dupm(int a[M][M], int b[M][M], int n) {
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = b[i][j];
}

int main() {
	int a[M][M], b[M][M], c[M][M], d[M][M], e[M][M], n, m, p, i, j, t;
	scanf("%d %d %d", &n, &m, &p);
	while (n != 0 && m != 0 && p != 0) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++)
				d[i][j] = 0;
			d[i][i] = 1;
		}
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				scanf("%d", &a[i][j]);
		while (p) {
			t = 1;
			_dupm(b, a, n);
			while (p >= t * 2)
				t *= 2, _mulm(b, b, c, n, m), _dupm(b, c, n);
			p -= t, _mulm(b, d, e, n, m), _dupm(d, e, n);
		}
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++)
				printf("%d ", d[i][j]);
			printf("\n");
		}
		printf("\n");
		scanf("%d %d %d", &n, &m, &p);
	}
	return 0;
}