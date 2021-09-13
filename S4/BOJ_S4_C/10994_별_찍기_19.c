#include <stdio.h>

char m[397][398];
void _rec(int x, int y, int n) {
	int i, j;
	if (n > 0) {
		for (i = x; i < x + n; i++)
			m[y][i] = '*', m[y + n - 1][i] = '*';
		for (i = y; i < y + n; i++)
			m[i][x] = '*', m[i][x + n - 1] = '*';
		_rec(x + 2, y + 2, n - 4);
	}
}

int n, i, j, x, y;
int main() {
	scanf("%d", &n);
	for (i = 0; i < 4 * n - 3; i++)
		for (j = 0; j < 4 * n - 3; j++)
			m[i][j] = ' ';
	_rec(0, 0, 4 * n - 3);
	for (i = 0; i < 4 * n - 3; i++)
		printf("%s\n", m[i]);
	return 0;
}