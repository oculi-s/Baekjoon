#include <stdio.h>
#include <stdlib.h>

int _abs(int a) {
	return a > 0 ? a : -a;
}

int main() {
	int n, r1, c1, r2, c2, i, j, y, x;
	scanf("%d %d %d %d %d", &n, &r1, &c1, &r2, &c2);
	char** P = malloc(sizeof(char*) * (r2 - r1 + 1));
	for (i = 0; i < r2 - r1 + 1; i++) {
		P[i] = malloc(sizeof(char) * (c2 - c1 + 1));
		for (j = 0; j < c2 - c1 + 1; j++)
			P[i][j] = '.';
	}
	for (i = r1; i <= r2; i++) {
		y = i % (2 * n - 1);
		y = y > n - 1 ? 2 * (n - 1) - y : y;
		for (j = c1; j <= c2; j++) {
			x = j % (2 * n - 1);
			if (x >= (n - 1) - y && x <= (n - 1) + y)
				P[i - r1][j - c1] = 97 + (n - 1 - y + _abs((n - 1) - x)) % 26;
		}
	}
	for (i = r1; i <= r2; i++) {
		for (j = c1; j <= c2; j++)
			printf("%c", P[i - r1][j - c1]);
		printf("\n");
	}
	return 0;
}