#include <stdio.h>
#define D 1000000000

int main() {
	int n, a = 0, b = 1, t;
	scanf("%d", &n);
	printf("%d\n", n == 0 ? 0 : n > 0 ? 1 : (-n) % 2 ? 1 : -1);
	n = n >= 0 ? n : -n;
	while (n--)
		t = a, a = (a + b) % D, b = t;
	printf("%d", a);
	return 0;
}