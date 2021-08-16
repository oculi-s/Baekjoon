#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int t, m, n, k, i, j, x, y, e, v = 0;
	bool p[52][52];
	int s[10000][2];
	scanf("%d", &t);
	for (int _ = 0; _ < t; _++) {
		scanf("%d %d %d", &n, &m, &k);
		for (i = 0; i < m + 2; i++)
			for (j = 0; j < n + 2; j++)
				p[i][j] = false;
		for (j = 0; j < k; j++) {
			scanf("%d %d", &x, &y);
			p[y + 1][x + 1] = true;
		}
		v = 0;
		for (i = 1; i <= m; i++)
			for (j = 1; j <= n; j++)
				if (p[i][j]) {
					v++, e = 0, s[e][0] = i, s[e][1] = j;
					while (e >= 0) {
						y = s[e][0], x = s[e][1], e--;
						if (p[y][x]) {
							p[y][x] = false;
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
					i = 1, j = 1;
				}
		printf("%d\n", v);
	}
	return 0;
}