#include <stdio.h>
#include <math.h>
#define M 1000000000

int d[101][10][1024], n, i, j, k, t, c, p[10];

int main() {
	scanf("%d", &n);
	for (i = 0; i <= 9; i++)
		p[i] = (int)pow(2, i);
	for (i = 1; i <= 9; i++)
		d[1][i][p[i]] = 1;
	for (i = 2; i <= n; i++)
		for (j = 0; j <= 9; j++) {
			if (j > 0)
				for (k = 0; k < 1024; k++) {
					d[i][j][k | p[j]] += d[i - 1][j - 1][k];
					d[i][j][k | p[j]] %= M;
				}
			if (j < 9)
				for (k = 0; k < 1024; k++) {
					d[i][j][k | p[j]] += d[i - 1][j + 1][k];
					d[i][j][k | p[j]] %= M;
				}
		}
		c = 0;
		for (i = 0; i <= 9; i++) {
			c += d[n][i][1023];
			c %= M;
		}
	printf("%d", c);
	return 0;
}
