#include <stdio.h>

int n, i, j, k, a[300][300], b[300][300], c[300][300], d;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &(a[i][j]));
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &(b[i][j]));
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			for (k = 0; k < n; k++)
				c[i][j] |= a[i][k] & b[k][j];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			d += c[i][j];
	printf("%d", d);
	return 0;
}
