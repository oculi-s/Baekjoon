#include <stdio.h>

int x[100000], e = 0, k;
int main() {
	unsigned long long s = 0;
	scanf("%lld", &k);
	while (k--) {
		scanf("%d", x + e);
		e += x[e] ? 1 : -1;
	}
	for (k = 0; k < e; k++)
		s += x[k];
	printf("%lld", s);
	return 0;
}