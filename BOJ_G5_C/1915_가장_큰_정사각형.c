#include <stdio.h>
# define M 1010

int p[M][M] = { 0 };
int main() {
	int n, m, i, j, k, l, a = 0;
	char s[M];
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++) {
		scanf("%s", s);
		for (j = 1; j <= m; j++)
			p[i][j] = s[j - 1] == '1';
	}
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
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
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			a = a > p[i][j] ? a : p[i][j];
	printf("%d", a * a);
	return 0;
}