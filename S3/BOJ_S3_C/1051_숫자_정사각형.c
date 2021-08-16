#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define _max(a,b) a>b?a:b

bool _same4(int a, int b, int c, int d) {
	return a == b && b == c && c == d;
}

int main() {
	int n, m, i, j, p[50][50];
	scanf("%d %d", &n, &m);
	char t[50];
	for (i = 0; i < n; i++) {
		scanf("%s", t);
		for (j = 0; j < m; j++)
			p[i][j] = t[j] - 48;
	}
	int x1, x2, y1, y2, d, a = 1;
	for (x1 = 0; x1 < m - 1; x1++)
		for (y1 = 0; y1 < n - 1; y1++)
			for (x2 = x1 + 1, y2 = y1 + 1; y2 < n && x2 < m; x2++, y2++)
				if (_same4(p[y1][x1], p[y1][x2], p[y2][x1], p[y2][x2]))
					a = _max(a, (x2 - x1 + 1) * (x2 - x1 + 1));
	printf("%d", a);
	return 0;
}