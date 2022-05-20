#include <stdio.h>

int n, i, j, c;
char a[15][15], b[15][15];

int _c(int y, int x) {
	if (a[y][x] == '*')
		c = 1;
	int i, j, c = 0;
	for (i = y - 1; i <= y + 1; i++)
		for (j = x - 1; j <= x + 1; j++)
			c += a[i][j] == '*';
	return c + '0';
}

int main() {
	scanf("%d\n", &n);
	for (i = 1; i <= n; i++)
		scanf("%s", a[i] + 1);
	for (i = 1; i <= n; i++)
		scanf("%s", b[i] + 1);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (b[i][j] == 'x')
				b[i][j] = _c(i, j);
	if (c)
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				if (a[i][j] == '*')
					b[i][j] = '*';
	for (i = 1; i <= n; i++)
		b[i][n + 1] = 0, printf("%s\n", b[i] + 1);
	return 0;
}
