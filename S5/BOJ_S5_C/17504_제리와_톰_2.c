#include <stdio.h>

typedef long long Int;
Int n, i, a[15], p, q, t;
int main() {
	scanf("%lld", &n);
	for (i = 0; i < n; i++)
		scanf("%lld", a + i);
	q = a[n - 1], p = 1;
	for (i = n - 1; i; i--)
		t = q, q = a[i - 1] * q + p, p = t;
	printf("%lld %lld", q - p, q);
	return 0;
}
