#include <stdio.h>

int a[1025][1025], n, m, i, j, x1, y1, x2, y2;
unsigned long long s[1025][1025];
int main() {
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			scanf("%d", &(a[i][j]));
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a[i][j];
	for (i = 0; i < m; i++) {
		scanf("%d %d %d %d", &y1, &x1, &y2, &x2);
		printf("%lld\n", s[y2][x2] - s[y1 - 1][x2] - s[y2][x1 - 1] + s[y1 - 1][x1 - 1]);
	}
	return 0;
}