#include <stdio.h>

int main() {
	int n, a, i = 2, j, l = 2, x, y;
	scanf("%d\n%d", &n, &a);
	int** p = malloc(sizeof(int*) * n);
	for (j = 0; j < n; j++)
		p[j] = malloc(sizeof(int) * n);
	x = n / 2, y = n / 2, p[y][x] = 1, y--;
	while (i <= n * n) {
		for (j = 0; j < l; j++)
			p[y][x++] = i++;
		y++, x--;
		for (j = 0; j < l; j++)
			p[y++][x] = i++;
		x--, y--;
		for (j = 0; j < l; j++)
			p[y][x--] = i++;
		y--, x++;
		for (j = 0; j < l; j++)
			p[y--][x] = i++;
		l += 2;
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", p[i][j]);
			if (p[i][j] == a)
				x = j, y = i;
		}
		printf("\n");
	}
	printf("%d %d", y + 1, x + 1);
}