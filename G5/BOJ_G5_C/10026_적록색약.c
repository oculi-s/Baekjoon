#include <stdio.h>

char a[102][102], b[102][102];
int n, i, j, c, d;

void _spr(int i, int j) {
	b[i][j] = 1;
	if (a[i + 1][j] == a[i][j] && !b[i + 1][j])
		_spr(i + 1, j);
	if (a[i - 1][j] == a[i][j] && !b[i - 1][j])
		_spr(i - 1, j);
	if (a[i][j + 1] == a[i][j] && !b[i][j + 1])
		_spr(i, j + 1);
	if (a[i][j - 1] == a[i][j] && !b[i][j - 1])
		_spr(i, j - 1);
}

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%s", a[i] + 1);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (!b[i][j])
				c++, _spr(i, j);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++) {
			if (a[i][j] == 'R')
				a[i][j] = 'G';
			b[i][j] = 0;
		}
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (!b[i][j])
				d++, _spr(i, j);
	printf("%d %d", c, d);
	return 0;
}
