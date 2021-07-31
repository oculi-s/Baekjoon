#include <stdio.h>
#include <stdbool.h>

bool M[65][65];
char a[65 * 65 * 4];
unsigned short e = 0;

void _quad(short x, short y, short n) {
	short i = 0, j = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			if (M[y + i][x + j] != M[y][x])
				break;
		if (j != n)
			break;
	}
	if (i == n && j == n)
		a[e++] = M[y][x] + 48;
	else {
		n /= 2, a[e++] = '(';
		for (i = 0; i < 2; i++)
			for (j = 0; j < 2; j++)
				_quad(x + n * j, y + n * i, n);
		a[e++] = ')';
	}
}

int main() {
	char s[65];
	short n, i, j;
	scanf("%hd", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", s);
		for (j = 0; j < n; j++)
			M[i][j] = s[j] == '1';
	}
	_quad(0, 0, n), a[e] = 0;
	printf("%s", a);
	return 0;
}