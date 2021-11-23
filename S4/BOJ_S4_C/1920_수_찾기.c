#include <stdio.h>
#include <stdlib.h>

int bisect(int* a, int t, int r) {
	int l = 0, m;
	while (l < r) {
		m = (l + r) / 2;
		if (a[m] >= t)
			r = m;
		else
			l = m + 1;
	}
	return r;
}

int c (int *a, int *b){
	return *a == *b ? 0: *a > *b ? 1 : -1;
}

int n, m, t, i, j, a[100000];
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", a + i);
	}
	qsort(a, n, sizeof(int), c);
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d", &t);
		j = bisect(a, t, n);
		printf("%d\n", a[j] == t);
	}
	return 0;
}