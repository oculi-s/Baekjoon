#include <stdio.h>
#include <stdlib.h>
#define M 1010

typedef unsigned long long llu;
int t, i, j, n, m, a[M], b[M];
int sa[M][M], sb[M][M], ta[M * M / 2], tb[M * M / 2], ea, eb;
llu ca, cb, c;

int _c(int* a, int* b) {
	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}

llu find(int* arr, int r, int v) {
	int l = 0, m;
	while (l < r) {
		m = (l + r) / 2;
		if (arr[m] < v)
			l = m + 1;
		else if (arr[m] > v)
			r = m;
		else {
			while (arr[m - 1] == v && m > 0)
				m--;
			cb = 1;
			while (arr[m + 1] == v && m < eb - 1)
				cb++, m++;
			return cb;
		}
	}
	return 0;
}

int main() {
	scanf("%d", &t);
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", a + i);
		for (j = 1; j <= i; j++)
			sa[i][j] = sa[i - 1][j] + a[i], ta[ea++] = sa[i][j];
	}
	scanf("%d", &m);
	for (i = 1; i <= m; i++) {
		scanf("%d", b + i);
		for (j = 1; j <= i; j++)
			sb[i][j] = sb[i - 1][j] + b[i], tb[eb++] = sb[i][j];
	}
	qsort(ta, ea, sizeof(int), _c);
	qsort(tb, eb, sizeof(int), _c);
	for (i = 0; i < ea; i++) {
		ca = 1;
		while (ta[i] == ta[i + 1] && i < ea - 1)
			i++, ca++;
		c += ca * find(tb, eb, t - ta[i]);
	}
	printf("%llu", c);
	return 0;
}
