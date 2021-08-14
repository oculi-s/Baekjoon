#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int p[502][502], d[502][502];
int main() {
	int m, n, i, j, k, s;
	scanf("%d %d", &m, &n);
	for (i = 0; i <= m + 1; i++)
		for (j = 0; j <= n + 1; j++)
			p[i][j] = 10001, d[i][j] = 0;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			scanf("%d", &(p[i][j]));
	d[1][1] = 1;
	for (k = 0; k <= 4; k++)
		for (i = 1; i <= m; i++)
			for (j = 1; j <= n; j++) {
				s = 0;
				if (p[i][j] < p[i - 1][j])
					s += d[i - 1][j];
				if (p[i][j] < p[i + 1][j])
					s += d[i + 1][j];
				if (p[i][j] < p[i][j - 1])
					s += d[i][j - 1];
				if (p[i][j] < p[i][j + 1])
					s += d[i][j + 1];
				if (s > d[i][j])
					d[i][j] = s;
			}
	printf("%d", d[m][n]);
	return 0;
}