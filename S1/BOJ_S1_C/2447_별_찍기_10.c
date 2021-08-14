#include <stdio.h>
#include <stdbool.h>

bool M[6561][6561] = { 0, };
void _star(short x, short y, short n) {
	if (n == 1)
		M[y][x] = 1;
	else {
		short i, j;
		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++)
				if (i != 1 || j != 1)
					_star(x + n / 3 * j, y + n / 3 * i, n / 3);
	}
}

int main() {
	short n, i, j;
	scanf("%hd", &n);
	_star(0, 0, n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%c", M[i][j] ? '*' : ' ');
		printf("\n");
	}
	return 0;
}