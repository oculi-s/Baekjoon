#include <stdio.h>
#include <stdlib.h>
#define M 100001

int _c(int* x, int* y) {
	return *x - *y;
}

int x[M], y[M], n, i, j, t, c = 0;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d %d", x + i, y + i);
	qsort(x, n, sizeof(int), _c);
	qsort(y, n, sizeof(int), _c);
	t = 0;
	for (i = 0; i < n - 1; i++) {
		if (x[i] == x[i + 1])
			t = 1;
		else
			c += t, t = 0;
	}
	c += t, t = 0;
	for (i = 0; i < n - 1; i++) {
		if (y[i] == y[i + 1])
			t = 1;
		else
			c += t, t = 0;
	}
	c += t;
	printf("%d", c);
	return 0;
}