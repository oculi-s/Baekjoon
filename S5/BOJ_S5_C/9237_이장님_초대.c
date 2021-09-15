#include <stdio.h>
#include <stdlib.h>
#define max(a, b) (a>b?a:b)

int c(int* a, int* b) {
	return *b - *a;
}

int n, i, m, x[100000];
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", x + i);
	qsort(x, n, 4, c);
	for (i = 0; i < n; i++)
		m = max(m, x[i] + i + 1);
	printf("%d", m + 1);
	return 0;
}