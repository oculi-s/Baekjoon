#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, s, m, i, j, t = -1;
	scanf("%d %d %d", &n, &s, &m);
	int v, p[100][1010];
	for (i = 0; i <= m + 10; i++)
		p[0][i] = 0;
	p[0][s] = 1;
	for (i = 0; i < n; i++) {
		scanf("%d", &v);
		for (j = 0; j <= m; j++)
			if (p[i][j]) {
				if (j - v >= 0)
					p[i + 1][j - v] = 1;
				if (j + v <= m)
					p[i + 1][j + v] = 1;
			}
		t = -1;
		for (j = 0; j <= m; j++)
			if (p[i + 1][j] == 1)
				t = t > j ? t : j;
		if (t == -1)
			break;
	}
	printf("%d", t);
	return 0;
}