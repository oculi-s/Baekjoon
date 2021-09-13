#include <stdio.h>
#include <stdlib.h>

int c(int* a, int* b) {
	return *a - *b;
}

int n, i, x[1000000];
int main() {
	scanf("%d", &n);
	for (; i < n; i++)
		scanf("%d", x + i);
	qsort(x, n, sizeof(int), c);
	for (i = 0; i < n; i++)
		printf("%d\n", x[i]);
	return 0;
}