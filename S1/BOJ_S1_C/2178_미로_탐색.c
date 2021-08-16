#include <stdio.h>
#include <stdlib.h>

int min4(int a, int b, int c, int d) {
	a = a < b ? a : b;
	b = b < c ? b : c;
	c = c < d ? c : d;
	a = a < b ? a : b;
	b = b < c ? b : c;
	a = a < b ? a : b;
	return a;
}

int main() {
	int m, n, i, j, p[102][102], d[102][102];
	scanf("%d %d", &m, &n);
	char s[100];
	for (i = 1; i <= m; i++) {
		scanf("%s", s);
		for (j = 1; j <= n; j++)
			p[i][j] = *(s + j - 1) == '1';
	}
	for (i = 0; i < m + 2; i++)
		for (j = 0; j < n + 2; j++)
			d[i][j] = 1000000;
	d[1][1] = 1;
	for (int _ = 0; _ < m * n; _++)
		for (i = 1; i <= m; i++)
			for (j = 1; j <= n; j++)
				if (p[i][j] == 1)
					if (i != 1 || j != 1)
						d[i][j] = min4(d[i - 1][j], d[i + 1][j], d[i][j + 1], d[i][j - 1]) + 1;
	printf("%d", d[m][n]);
	return 0;
}