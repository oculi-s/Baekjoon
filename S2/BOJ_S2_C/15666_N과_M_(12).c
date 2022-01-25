#include <stdio.h>

int n, m, a[8], i, j, t, p[10001];

void _r(int b[8], int c, int e) {
	int i;
	if (c == m) {
		for (i = 0; i < m; i++)
			printf("%d ", b[i]);
		printf("\n");
	}
	else {
		for (i = e; i < n; i++)
			b[c] = a[i], _r(b, c + 1, i);
	}
}

int main() {
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%d", &t), p[t] = 1;
	n = 0;
	for (i = 1; i <= 10000; i++)
		if (p[i])
			a[n++] = i;
	int b[8] = { 0, };
	_r(b, 0, 0);
	return 0;
}
