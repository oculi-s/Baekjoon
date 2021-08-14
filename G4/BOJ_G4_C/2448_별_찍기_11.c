#include <stdio.h>

char s[3100][6200];
void _s(int x, int y, int n) {
	if (n == 1)
		s[y][x - 1] = '*', s[y][x + 1] = '*', s[y - 1][x] = '*';
	else {
		if (n == 3)
			s[y][x - 1] = '*', s[y][x + 1] = '*';
		n /= 2;
		_s(x - n, y, n);
		_s(x + n, y, n);
		_s(x, y - n, n);
	}
}

int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= 2 * n + 1; j++)
			s[i][j] = ' ';
	_s(n, n, n);
	for (i = 1; i <= n; i++)
		s[i][2 * n + 2] = 0, printf("%s\n", s[i] + 1);
	return 0;
}