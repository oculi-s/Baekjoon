#include <stdio.h>
#define M 20

void _mulm(int a[M][M], int b[M][M], int c[M][M], int m, int n, int q) {
	int i, j, k;
	for (i = 0; i < m; i++)
		for (j = 0; j < q; j++) {
			c[i][j] = 0;
			for (k = 0; k < n; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
}

int main() {
	int m, n, p, q, i, j, a[M][M], b[M][M], c[M][M], k = 1;
	scanf("%d %d %d %d", &m, &n, &p, &q);
	while (m + n + p + q) {
		printf("Case #%d:\n", k);
		for (i = 0; i < m; i++)
			for (j = 0; j < n; j++)
				scanf("%d", &a[i][j]);
		for (i = 0; i < p; i++)
			for (j = 0; j < q; j++)
				scanf("%d", &b[i][j]);
		if (n != p)
			printf("undefined\n");
		else {
			_mulm(a, b, c, m, n, q);
			for (i = 0; i < m; i++) {
				printf("| ");
				for (j = 0; j < q; j++)
					printf("%d ", c[i][j]);
				printf("|\n");
			}
		}
		scanf("%d %d %d %d", &m, &n, &p, &q), k++;
	}
	return 0;
}