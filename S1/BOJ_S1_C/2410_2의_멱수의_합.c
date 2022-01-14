#include <stdio.h>
#define N 1000000000

int a[20], i, j, k, b[20][1100001], n, v;

int main() {
	a[0] = 1, b[0][1] = 1;
	for (i = 1; i < 20; i++)
		a[i] = a[i - 1] * 2, b[i][a[i]] = 1;
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
		for (j = 0; j < 20; j++)
			if (i > a[j])
				for (k = 0; k <= j; k++)
					b[j][i] += b[k][i - a[j]], b[j][i] %= N;
	for (i = 0; i < 20; i++)
		v += b[i][n], v %= N;
	printf("%d", v);
	return 0;
}
