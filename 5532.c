#include <stdio.h>
#include <stdlib.h>

int main() {
	int l, a, b, c, d;
	scanf("%d\n%d\n%d\n%d\n%d", &l, &a, &b, &c, &d);
	a = a / c + (a % c > 0), b = b / d + (b % d > 0);
	printf("%d", l - (a > b ? a : b));
	return 0;
}