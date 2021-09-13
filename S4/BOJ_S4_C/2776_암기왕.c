#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int x[1000000], i, n, m, t, v;

int _bisect() {
	int l = 0, r = n, m;
	while (l < r) {
		m = (l + r) / 2;
		if (x[m] >= v)
			r = m;
		else
			l = m + 1;
	}
	return x[r] == v;
}

int _c(int* a, int* b) {
	if (*a > *b)
		return 1;
	else if (*a < *b)
		return -1;
	else
		return 0;
}

int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i = 0; i < n; i++)
			scanf("%d", x + i);
		qsort(x, n, sizeof(int), _c);
		scanf("%d", &m);
		while (m--) {
			scanf("%d", &v);
			if (x[0] <= v && v <= x[n - 1])
				printf("%d\n", _bisect());
			else
				printf("0\n");
		}
	}
	return 0;
}