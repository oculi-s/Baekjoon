#include <stdio.h>
#include <stdlib.h>

int len(int* t) {
	int i;
	for (i = 0; i < 9; i++)
		if (!t[i])
			return i;
}

void _copy(int* a, int* t, int n) {
	int i;
	for (i = 0; i < n; i++)
		a[i] = t[i];
}

int* _c(int* a, int* b) {
	return *a - *b;
}

int x[8], s[40320][9], e, * t;
int main() {
	int n, m, i, j, k;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%d", x + i);
	qsort(x, n, sizeof(int), _c);
	for (e = 0; e < n; e++)
		s[e][0] = n - e;
	while (e) {
		e--, t = s[e], j = len(t);
		if (j == m) {
			for (k = 0; k < j; k++)
				printf("%d ", x[t[k] - 1]), t[k] = 0;
			printf("\n");
		}
		else {
			for (i = n; i; i--) {
				_copy(s[e], t, j);
				s[e][j] = i, e++;
			}
		}
	}
	return 0;
}