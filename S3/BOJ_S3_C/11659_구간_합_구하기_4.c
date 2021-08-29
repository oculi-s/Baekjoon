#include <stdio.h>

int x[100001], n, m, i, a, b;
int main() {
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
		scanf("%d", x + i);
	for (i = 2; i <= n; i++)
		x[i] += x[i - 1];
	for (i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", x[b] - x[a - 1]);
	}
	return 0;
}