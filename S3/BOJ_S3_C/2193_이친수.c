#include <stdio.h>

int main() {
	int n;
	unsigned long long a = 0, b = 1, t;
	scanf("%d", &n);
	while (n--)
		t = a, a += b, b = t;
	printf("%lld", a);
	return 0;
}