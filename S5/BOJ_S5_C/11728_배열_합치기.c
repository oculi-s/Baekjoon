#include <stdio.h>
#include <stdlib.h>

int n, m, x[2000000], i;

int* _c(int* a, int* b) {
	return *a - *b;
}

int main() {
	scanf("%d %d", &n, &m);
	for (; i < n + m; i++)
		scanf("%d", x + i);
	qsort(x, n + m, sizeof(int), _c);
	for (i = 0; i < n + m; i++)
		printf("%d ", x[i]);
	return 0;
}