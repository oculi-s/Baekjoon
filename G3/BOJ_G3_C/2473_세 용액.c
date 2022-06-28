#include <stdio.h>
#include <stdlib.h>

typedef long long lld;
int s, i, e, n, b[3];
lld a[5001], m = 2e10, v;

lld _c(lld* a, lld* b) {
	return *a - *b;
}

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%lld", a + i);
	qsort(a, n, sizeof(lld), _c);
	for (s = 0; s < n - 2; s++) {
		i = s + 1, e = n - 1;
		while (i < e) {
			v = a[s] + a[i] + a[e];
			if (llabs(v) < m)
				m = llabs(v), b[0] = s, b[1] = i, b[2] = e;
			if (v < 0)
				i++;
			else if (v > 0)
				e--;
			else
				break;
		}
	}
	printf("%lld %lld %lld", a[b[0]], a[b[1]], a[b[2]]);
	return 0;
}
