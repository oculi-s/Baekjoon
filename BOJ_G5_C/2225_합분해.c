#include <stdio.h>
#define D 1000000000

typedef unsigned long long ll;

int main() {
	int n, k, i;
	scanf("%d %d", &n, &k);
	ll P[201] = { 1 };
	while (k--) {
		for (i = 1; i <= n; i++)
			P[i] = (P[i] + P[i - 1]) % D;
	}
	printf("%lld", P[n]);
	return 0;
}