#include <stdio.h>

int c[1001][1001], n, k, i, j;
int main() {
	scanf("%d %d", &n, &k);
	c[0][0] = 1;
	for (i = 1; i <= 1000; i++) {
		c[i][0] = 1, c[i][i] = 1;
		for (j = 1; j < i; j++)
			c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % 10007;
	}
	printf("%d", c[n][k]);
	return 0;
}