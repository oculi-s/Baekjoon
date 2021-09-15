#include <stdio.h>
#define D 1000000009

unsigned int t, n, i, j, c[3][100001];
int main() {
	scanf("%d", &t);
	c[0][1] = 1, c[1][2] = 1, c[0][3] = 1, c[1][3] = 1, c[2][3] = 1;
	for (i = 4; i <= 100000; i++)
		for (j = 0; j < 3; j++)
			c[j][i] = (c[(j + 1) % 3][i - j - 1] + c[(j + 2) % 3][i - j - 1]) % D;
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", (c[0][n] + c[1][n] + c[2][n]) % D);
	}
	return 0;
}