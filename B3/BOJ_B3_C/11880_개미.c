#include <stdio.h>

typedef unsigned long long ll;

int main() {
	ll t, a, b, c;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d %d", &a, &b, &c);
		printf("%lld\n", a > b && a > c ? a * a + (b + c) * (b + c) : b > c ? b * b + (a + c) * (a + c) : c * c + (a + b) * (a + b));
	}
	return 0;
}