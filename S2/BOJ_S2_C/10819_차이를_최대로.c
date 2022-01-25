#include <stdio.h>
#include <stdlib.h>

int n, a[8], b[8], i, m;

void _r(int b[8], int e, int v, int c) {
	if (c == n) {
		if (m < v)
			m = v;
	}
	else {
		int i;
		for (i = 0; i < n; i++)
			if (!b[i])
				b[i] = 1, _r(b, i, v + abs(a[e] - a[i]), c + 1), b[i] = 0;
	}
}

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	for (i = 0; i < n; i++)
		b[i] = 1, _r(b, i, 0, 1), b[i] = 0;
	printf("%d", m);
	return 0;
}
