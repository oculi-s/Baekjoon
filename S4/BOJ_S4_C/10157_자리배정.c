#include <stdio.h>

int m[1002][1002], r, c, k, i, j;
void _rec(int x, int y, int v, int d) {
	if (v == k) {
		printf("%d %d", x, y);
	}
	else {
		m[y][x] = 1;
		if (d == 1) {
			if (m[y + 1][x])
				_rec(x + 1, y, v + 1, 2);
			else
				_rec(x, y + 1, v + 1, 1);
		}
		else if (d == 2) {
			if (m[y][x + 1])
				_rec(x, y - 1, v + 1, 3);
			else
				_rec(x + 1, y, v + 1, 2);
		}
		else if (d == 3) {
			if (m[y - 1][x])
				_rec(x - 1, y, v + 1, 4);
			else
				_rec(x, y - 1, v + 1, 3);
		}
		else {
			if (m[y][x - 1])
				_rec(x, y + 1, v + 1, 1);
			else
				_rec(x - 1, y, v + 1, 4);
		}
	}
}

int main() {
	scanf("%d %d\n%d", &c, &r, &k);
	if (k > r * c) {
		printf("0");
		return 0;
	}
	for (i = 0; i < r + 1; i++)
		m[i][0] = 1, m[i][c + 1] = 1;
	for (i = 0; i < c + 1; i++)
		m[0][i] = 1, m[r + 1][i] = 1;
	_rec(1, 1, 1, 1);
	return 0;
}