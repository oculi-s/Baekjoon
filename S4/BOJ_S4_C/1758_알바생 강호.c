#include <stdio.h>

int n, a[100000], i;
long long c;

int _c(int* a, int* b) {
	return *b - *a;
}

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	qsort(a, n, sizeof(int), _c);
	for (i = 0; i < n; i++)
		if (a[i] > i)
			c += a[i] - i;
	printf("%lld", c);
	return 0;
}
