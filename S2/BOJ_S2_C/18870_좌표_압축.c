#include <stdio.h>
#include <stdlib.h>

int c(int* a, int* b) {
	return *a - *b;
}

int n, i, j, x[1000000], y[1000000], z[1000000], e;

int _bisect() {
	int l = 0, r = e, m;
	while (l < r) {
		m = (l + r) / 2;
		if (z[m] >= x[i])
			r = m;
		else
			l = m + 1;
	}
	return r;
}

int main() {
	scanf("%d", &n);
	for (; i < n; i++)
		scanf("%d", x + i), y[i] = x[i];
	qsort(y, n, sizeof(int), c);
	z[0] = y[0], e = 0;
	for (i = 1; i < n; i++)
		if (y[i] != z[e])
			e++, z[e] = y[i];
	for (i = 0; i < n; i++)
		printf("%d ", _bisect());
	return 0;
}