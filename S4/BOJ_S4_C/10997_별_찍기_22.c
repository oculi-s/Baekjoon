#include <stdio.h>

int n, i, j;
char m[400][400];
void rec(int y, int x, int n) {
	int i;
	if (n >= 4) {
		for (i = 0; i < n; i++)
			x--, m[y][x] = ' ';
		for (i = 0; i < n; i++)
			y++, m[y][x] = ' ';
		n -= 2;
		for (i = 0; i < n; i++)
			x++, m[y][x] = ' ';
		for (i = 0; i < n; i++)
			y--, m[y][x] = ' ';
		rec(y, x, n - 2);
	}
}

int main() {
	scanf("%d", &n);
	if (n == 1) {
		printf("*");
		return 0;
	}
	for (i = 0; i <= 4 * n - 2; i++)
		for (j = 0; j < 4 * n - 3; j++)
			m[i][j] = '*';
	rec(1, 4 * n - 3, 4 * (n - 1));
	printf("%s\n*\n", m[0]);
	for (i = 2; i <= 4 * n - 2; i++)
		printf("%s\n", m[i]);
	return 0;
}