#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int n, m, k, r, c, i, j;
	bool p[110][110];
	scanf("%d %d %d", &n, &m, &k);
	for (i = 0; i <= n + 1; i++)
		for (j = 0; j <= m + 1; j++)
			p[i][j] = false;
	for (i = 0; i < k; i++)
		scanf("%d %d", &r, &c), p[r][c] = true;
	int s[10000][2], e, v, x, y, a = 1;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			if (p[i][j] == 1) {
				v = 0, e = 0, s[e][0] = i, s[e][1] = j;
				while (e >= 0) {
					y = s[e][0], x = s[e][1], e--;
					if (p[y][x]) {
						p[y][x] = false,  v++;
						if (p[y - 1][x])
							++e, s[e][0] = y - 1, s[e][1] = x;
						if (p[y + 1][x])
							++e, s[e][0] = y + 1, s[e][1] = x;
						if (p[y][x - 1])
							++e, s[e][0] = y, s[e][1] = x - 1;
						if (p[y][x + 1])
							++e, s[e][0] = y, s[e][1] = x + 1;
					}
				}
				a = a > v ? a : v;
			}
	printf("%d", a);
	return 0;
}