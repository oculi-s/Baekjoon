#include <stdio.h>

int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if (a <= b - 1)
		b = a + 1;
	printf("%lld", b);
	return 0;
}