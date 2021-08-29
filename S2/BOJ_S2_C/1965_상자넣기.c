#include <stdio.h>

int n, x[1001], c[1001], i, j, m;

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", x + i), c[i] = 1;
	for (i = 1; i <= n; i++) {
		for (j = 1; j < i; j++)
			if (x[j] < x[i])
				c[i] = c[j] + 1 > c[i] ? c[j] + 1 : c[i];
	}
	for (i = 1; i <= n; i++)
		m = m > c[i] ? m : c[i];
	printf("%d", m);
	return 0;
}