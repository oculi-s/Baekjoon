#include <stdio.h>
#include <stdlib.h>

int n, m, a[100001], i, s, e, b;

int _c(int* a, int* b) {
	return *a - *b;
}

int main() {
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	qsort(a, n, sizeof(int), _c);
	s = 0, e = 1, b = 2000000000;
	while (s < n - 1 && e < n) {
		if (a[e] - a[s] < m)
			e++;
		else {
			if (a[e] - a[s] < b)
				b = a[e] - a[s];
			s++;
		}
	}
	printf("%d", b);
	return 0;
}
