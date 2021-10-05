#include <stdio.h>

int n, s = 1;
int main() {
	scanf("%lld", &n);
	while (n--)
		s += 3 * n + 4, s %= 45678;
	printf("%lld", s);
	return 0;
}