#include <stdio.h>
#include <stdlib.h>

int n, v, c[200], e;
int main() {
	scanf("%d", &n);
	if (!n)
		printf("0");
	while (n)
		v = abs(n) % 2, c[e++] = v, n -= v, n /= -2;
	while (e)
		printf("%d", c[--e]);
	return 0;
}