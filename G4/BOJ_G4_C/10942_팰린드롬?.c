#include <stdio.h>
#define N 2001

int n, m, i, j, s, e, a[N], p[N][N];

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", a + i);
	for (i = 1; i <= n; i++) {
		p[i][i] = 1;
		j = 1;
		while (i - j > 0 && i + j <= n) {
			if (a[i - j] == a[i + j])
				p[i - j][i + j] = 1;
			else
				break;
			j++;
		}
		j = 0;
		while (i - j > 0 && i + j + 1 <= n) {
			if (a[i - j] == a[i + j + 1])
				p[i - j][i + j + 1] = 1;
			else
				break;
			j++;
		}
	}
	scanf("%d", &m);
	for (i = 0; i < m; i++)
		scanf("%d %d", &s, &e), printf("%d\n", p[s][e]);
	return 0;
}
