#include <stdio.h>

int n, x[100], a, b, c, d, i, M = -1e9, m = 1e9;

void _bfs(int v, int e, int a, int b, int c, int d) {
	if (a + b + c + d == 0)
		M = M > v ? M : v, m = m < v ? m : v;
	else {
		e++;
		if (a)
			_bfs(v + x[e], e, a - 1, b, c, d);
		if (b)
			_bfs(v - x[e], e, a, b - 1, c, d);
		if (c)
			_bfs(v * x[e], e, a, b, c - 1, d);
		if (d)
			_bfs(v / x[e], e, a, b, c, d - 1);
	}
}

int main() {
	scanf("%d", &n);
	for (; i < n; i++)
		scanf("%d", x + i);
	scanf("%d %d %d %d", &a, &b, &c, &d);
	_bfs(x[0], 0, a, b, c, d);
	printf("%d\n%d", M, m);
	return 0;
}