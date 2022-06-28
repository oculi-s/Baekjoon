#include <stdio.h>

int m[15][15], n, c;

int _cy(int t[15][15], int y, int x) {
	int i;
	for (i = 0; i < n; i++) {
		if (i != y) {
			if (t[i][x])
				return 0;
			if (x - y + i >= 0)
				if (t[i][x - y + i])
					return 0;
			if (x + y - i < n)
				if (t[i][x + y - i])
					return 0;
		}
	}
	return 1;
}

int _cx(int t[15][15], int y, int x) {
	int i;
	for (i = 0; i < n; i++)
		if (i != x)
			if (t[y][i])
				return 0;
	return 1;
}

int _p(int t[15][15], int y) {
	int j;
	if (y == n)
		c++;
	else
		for (j = 0; j < n; j++)
			if (_cx(m, y, j))
				if (_cy(m, y, j))
					t[y][j] = 1, _p(t, y + 1), t[y][j] = 0;
}

int main() {
	scanf("%d", &n);
	_p(m, 0);
	printf("%d", c);
	return 0;
}
