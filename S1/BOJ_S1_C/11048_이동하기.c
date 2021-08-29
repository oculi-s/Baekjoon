#include <stdio.h>

int _max3(int a, int b, int c) {
	return (a > b && a > c) ? a : b > c ? b : c;
}

int x[1001][1001], n, m, i, j;
int main() {
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf("%d", &x[i][j]);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			x[i][j] += _max3(x[i-1][j], x[i][j-1], x[i-1][j-1]);
	printf("%d", x[n][m]);
	return 0;
}