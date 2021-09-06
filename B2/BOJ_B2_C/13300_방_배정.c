#include <stdio.h>

int i, j, c[2][7], n, k, a, b;
int main() {
	scanf("%d %d", &n, &k);
	for (; i < n; i++)
		scanf("%d %d", &a, &b), c[a][b]++;
	a = 0;
	for (i = 0; i < 2; i++)
		for (j = 1; j <= 6; j++)
			a += (c[i][j] + k - 1) / k;
	printf("%d", a);
	return 0;
}