#include <stdio.h>

typedef unsigned long long ld;
ld a[100001], b[100001], m;
int n, i, j, k, p = 1e10;

int main() {
	scanf("%d", &n);
	for (i = 0; i < n - 1; i++)
		scanf("%lld", a + i);
	for (i = 0; i < n; i++)
		scanf("%lld", b + i);
	for (k = 0; k < n; k++)
		p = b[k] < p ? b[k] : p, m += p * a[k];
	printf("%lld", m);
	return 0;
}