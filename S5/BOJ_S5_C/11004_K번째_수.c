#include <stdio.h>
#include <stdlib.h>

int* _c(int* a, int* b) {
	return *a - *b;
}

int n, k, i, x[5000000];
int main() {
	scanf("%d %d", &n, &k);
	for (; i < n; i++)
		scanf("%d", x + i);
	qsort(x, n, sizeof(int), _c);
	printf("%d", x[k - 1]);
}