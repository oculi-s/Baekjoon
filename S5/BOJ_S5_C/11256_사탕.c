#include <stdio.h>
#include <stdlib.h>

int _c(int* a, int* b) {
	return *b - *a;
}

int t, i, j, n, a, b, c[1000];
int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &j, &n);
		for (i = 0; i < n; i++)
			scanf("%d %d", &a, &b), c[i] = a * b;
		qsort(c, n, sizeof(int), _c);
		for (i = 0; i < n && j > 0; i++)
			j -= c[i];
		printf("%d\n", i);
	}
	return 0;
}
