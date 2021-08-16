#include <stdio.h>
#include <stdlib.h>
#define E 1000

void _mul(int* b, int* a, int n, int d) {
	int i = 0, u = 0, m;
	m = a[i] * 2 + d + u;
	b[i++] = (m < 0 ? m + 10 : m) % 10;
	u = m >= 10 ? 1 : m < 0 ? -1 : 0;
	while (a[i] != E) {
		m = a[i] * 2 + u;
		b[i++] = (m < 0 ? m + 10 : m) % 10;
		u = m >= 10 ? 1 : m < 0 ? -1 : 0;
	}
	b[i] = u;
	b[i + u] = E;
}

void _cpy(int* a, int* b) {
	int i = 0;
	while (b[i] != E) { a[i] = b[i], i++; };
	a[i] = E;
}

int main() {
	int n, i, a[200], b[200], c[200];
	while (scanf("%d", &n) != EOF) {
		a[0] = 1, b[0] = 1, a[1] = E, b[1] = E, c[0] = E;
		for (i = 0; i < n; i++)
			_mul(c, b, 2, i % 2 ? 1 : -1), _cpy(a, b), _cpy(b, c);
		i = 0;
		while (b[++i] != E) {};
		while (i--) { printf("%d", b[i]); };
		printf("\n");
	}
	return 0;
}