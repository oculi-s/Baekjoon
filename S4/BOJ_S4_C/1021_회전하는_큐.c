#include <stdio.h>

int main() {
	int n, m, a[50], b[50], c[50], i, j, k, v = 0;
	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++)
		a[i] = i + 1;
	for (i = 0; i < m; i++)
		scanf("%d", b + i);
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			if (a[j] == b[i])
				break;
		v += j < n - j ? j : n - j, j++, n--;
		for (k = 0; k < n; k++)
			c[k] = a[(k + j) % (n + 1)];
		for (j = 0; j < n; j++)
			a[j] = c[j];
	}
	printf("%d", v);
	return 0;
}