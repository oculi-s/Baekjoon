#include <stdio.h>
#define D 1000000009

unsigned int t, n, i, c[3][10001];
int main() {
	scanf("%d", &t);
	c[0][1] = 1, c[0][2] = 1, c[1][2] = 1, c[0][3] = 1, c[1][3] = 1, c[2][3] = 1;
	for (i = 4; i <= 10000; i++) {
		c[0][i] = 1;
		c[1][i] = (c[0][i - 2] + c[1][i - 2]) % D;
		c[2][i] = (c[0][i - 3] + c[1][i - 3] + c[2][i - 3]) % D;
	}
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", (c[0][n] + c[1][n] + c[2][n]) % D);
	}
	return 0;
}