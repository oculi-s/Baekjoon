#include <stdio.h>

unsigned long long n, i, j, x[100], c[100][21];

int main() {
	scanf("%lld", &n);
	for (; i < n; i++)
		scanf("%lld", x + i);
	c[0][x[0]] = 1;
	for (i = 1; i < n - 1; i++) {
		for (j = 0; j <= 20 - x[i]; j++)
			if (c[i - 1][j])
				c[i][j + x[i]] += c[i - 1][j];
		for (j = x[i]; j <= 20; j++)
			if (c[i - 1][j])
				c[i][j - x[i]] += c[i - 1][j];
	}
	printf("%lld ", c[n - 2][x[n - 1]]);
	return 0;
}