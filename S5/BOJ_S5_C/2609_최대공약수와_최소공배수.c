#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, t;
	scanf("%d %d", &a, &b);
	int c, d;
	c = a > b ? a : b;
	d = a < b ? a : b;
	while (c % d)
		t = d, d = c % d, c = t;
	printf("%d\n%d", d, a * b / d);
	return 0;
}