#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 1, b = 3, n, t;
	scanf("%d", &n);
	while (--n)
		t = a, a = b, b = (t + 2 * b) % 9901;
	printf("%d", b);
	return 0;
}