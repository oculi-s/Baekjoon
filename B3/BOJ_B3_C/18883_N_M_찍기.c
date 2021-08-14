#include <stdio.h>

int main() {
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m - 1; j++)
			printf("%d ", 1 + i * m + j);
		printf("%d\n", (i + 1) * m);
	}
	return 0;
}