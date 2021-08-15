#include <stdio.h>
#define M 1000000

int _bisect(int* a, int v, int r) {
	int l = 0, c;
	while (l < r) {
		c = (l + r) / 2;
		if (a[c] > v)
			l = c + 1;
		else
			r = c;
	}
	return r;
}

int* _c(int* a, int* b) {
	return *b - *a;
}

int h[M];
long long s[M], t, l, r, c, i, n, m;
int main() {
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%d", h + i);
	qsort(h, n, sizeof(int), _c);
	s[0] = h[0];
	for (i = 1; i < n; i++)
		s[i] = h[i] + s[i - 1];
	l = 0, r = h[0], c;
	while (l + 1 < r) {
		c = (l + r) / 2;
		i = _bisect(h, c, n) - (h[i] != c);
		t = s[i] - c * (i + 1);
		if (t < m)
			r = c;
		else if (t > m)
			l = c;
		else
			r = c, l = c;
	}
	printf("%d", l);
	return 0;
}