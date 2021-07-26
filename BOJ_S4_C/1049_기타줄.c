#include <stdio.h>

int main() {
	int n, m, a, b, p = 1000, q = 1000, i;
	scanf("%d %d", &n, &m);
	for (i = 0; i < m; i++)
		scanf("%d %d", &a, &b), p = p < a ? p : a, q = q < b ? q : b;
	if (q * 6 > p)
		if (n % 6 * q < p)
			printf("%d", n / 6 * p + n % 6 * q);
		else
			printf("%d", (n / 6 + (n % 6 > 0)) * p);
	else
		printf("%d", n * q);
	return 0;
}