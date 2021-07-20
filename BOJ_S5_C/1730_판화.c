#include <stdio.h>
#include <stdbool.h>

int main() {
	int n, i, j, e = 0, x, y;
	bool h[10][10], v[10][10];
	char t[250];
	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			h[i][j] = 0, v[i][j] = 0;
	scanf("%d", &n);
	scanf("%s", t);
	x = 0, y = 0;
	while (t[e]) {
		switch (t[e]) {
		case 'R':
			if (x != n - 1)
				h[y][x] = 1, x++, h[y][x] = 1;
			break;
		case 'D':
			if (y != n - 1)
				v[y][x] = 1, y++, v[y][x] = 1;
			break;
		case 'L':
			if (x != 0)
				h[y][x] = 1, x--, h[y][x] = 1;
			break;
		case 'U':
			if (y != 0)
				v[y][x] = 1, y--, v[y][x] = 1;
		}
		e++;
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%c", v[i][j] && h[i][j] ? '+' : v[i][j] ? '|' : h[i][j] ? '-' : '.');
		printf("\n");
	}
	return 0;
}