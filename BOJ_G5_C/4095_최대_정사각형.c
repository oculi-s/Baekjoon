#include <stdio.h>
# define M 1001

int p[M][M] = { 0 };
int main() {
	int n, m, i, j, k, l, a;
	scanf("%d %d", &n, &m);
	while (n + m) {
		for (i = 1; i <= n; i++)
			for (j = 1; j <= m; j++)
				scanf("%d", &p[i][j]);
		for (i = 1, a = 0; i <= n; i++)
			for (j = 1; j <= m; j++) {
				if (p[i][j] && p[i - 1][j - 1]) {
					for (k = p[i - 1][j - 1]; k >= 1; k--) {
						for (l = 1; l <= k; l++)
							if (!p[i - l][j] || !p[i][j - l])
								break;
						if (l == k + 1) {
							p[i][j] = k + 1;
							break;
						}
					}
				}
				a = a > p[i][j] ? a : p[i][j];
			}
		printf("%d\n", a);
		scanf("%d %d", &n, &m);
	}
	return 0;
}