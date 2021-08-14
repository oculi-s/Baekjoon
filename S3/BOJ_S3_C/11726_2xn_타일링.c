#include <stdio.h>

int main() {
	unsigned long long a = 1, b = 1, t;
	int n;
	scanf("%d", &n);
	while (n--)
		t = a, a += b, b = t % 10007;
	printf("%lld", b);
	return 0;
}