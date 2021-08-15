#include <stdio.h>

int _max(int a, int b) {
	return a > b ? a : b;
}

int n, x[1001], i, j, d[1001], m = 0;
int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", x + i);
	for (i = 1; i <= n; i++)
		for (j = 0; j < i; j++)
			if (x[j] < x[i])
				d[i] = _max(d[i], d[j] + 1);
	for (i = 1; i <= n; i++)
		m = _max(m, d[i]);
	printf("%d", m);
	return 0;
}