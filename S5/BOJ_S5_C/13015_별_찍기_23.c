#include <stdio.h>

char m[200][400];
int n, i, j, x, y;
void r(int x, int y) {
	for (i = 0; i < n; i++)
		m[y + i][x + i] = '*';
}

void l(int x, int y) {
	for (i = 0; i < n; i++)
		m[y + i][x - i] = '*';
}

void f(int x, int y) {
	for (i = 0; i < n; i++)
		m[y][x + i] = '*';
}

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < 4 * (n - 1) - i; j++)
			m[i][j] = ' ';
	for (i = n; i < 2 * n; i++)
		for (j = 0; j < 2 * (n - 1) + i; j++)
			m[i][j] = ' ';
	r(0, 0), r(n - 1, 0), l(3 * (n - 1), 0), l(4 * (n - 1), 0);
	l(n - 1, n - 1), l(2 * (n - 1), n - 1), r(2 * (n - 1), n - 1), r(3 * (n - 1), n - 1);
	f(0, 0), f(3 * (n - 1), 0), f(0, 2 * (n - 1)), f(3 * (n - 1), 2 * (n - 1));
	for (i = 0; i < 2 * n - 1; i++)
		printf("%s\n", m[i]);
	return 0;
}