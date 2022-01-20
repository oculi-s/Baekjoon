#include <stdio.h>

int n, x, y, a[100][100], t[100][100], b, c, d, e, m;

void _pas(int x, int y) {
	int i, j;
	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			a[i + y][j + x] = 1;
}

void _spa(int y, int x) {
	int i;
	for (i = 0; y + i < 100; i++)
		if (a[y + i][x])
			t[y][x]++;
		else
			break;
}

int main() {
	int i, j;
	scanf("%d", &n);
	while (n--)
		scanf("%d %d", &x, &y), _pas(x, y);
	for (i = 1; i < 100; i++)
		for (j = 1; j < 100; j++)
			if (a[i][j])
				_spa(i, j);
	for (i = 1; i < 100; i++)
		for (j = 1; j < 100; j++)
			if (t[i][j]) {
				b = j, c = j, m = t[i][j];
				while (t[i][c]) {
					if (t[i][c] < m)
						m = t[i][c];
					d = m * (c - b + 1), c++;
					if (d > e)
						e = d;
				}
			}
	printf("%d", e);
	return 0;
}
