#include <stdio.h>

int n, m, a[301][301], i, j, t, r1, r2, c1, c2;
int main() {
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf("%d", &a[i][j]);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
		printf("%d\n", a[r2][c2] + a[r1 - 1][c1 - 1] - a[r1 - 1][c2] - a[r2][c1 - 1]);
	}
	return 0;
}