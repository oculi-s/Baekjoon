#include <stdio.h>

int main() {
	unsigned long long a = 0, b = 1, t;
	int n;
	scanf("%d", &n);
	while (n--)
		t = a, a += b, b = t;
	printf("%lld", b * 2 + a * 4);
	return 0;
}