#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, n = 0;
	scanf("%d", &x);
	while (x)
		n += x % 2, x /= 2;
	printf("%d", n);
	return 0;
}