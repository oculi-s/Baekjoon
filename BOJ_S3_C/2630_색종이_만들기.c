#include <stdio.h>
#include <stdbool.h>

bool M[128][128];
unsigned short a[2] = { 0, };

void _quad(short x, short y, short n) {
	short i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			if (M[y + i][x + j] != M[y][x])
				break;
		if (j != n)
			break;
	}
	if (i == n && j == n)
		a[M[y][x]]++;
	else {
		n /= 2;
		_quad(x, y, n);
		_quad(x + n, y, n);
		_quad(x, y + n, n);
		_quad(x + n, y + n, n);
	}
}

int main() {
	short n, i, j;
	scanf("%hd", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &(M[i][j]));
	_quad(0, 0, n);
	printf("%hd\n%hd", a[0], a[1]);
	return 0;
}