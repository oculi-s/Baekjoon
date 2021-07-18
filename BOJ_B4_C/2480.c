#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c)
		d = 10000 + 1000 * a;
	else if (a != b && b != c && c != a)
		d = 100 * ((a > b && a > c) ? a : (b > c ? b : c));
	else
		d = 1000 + 100 * (a == b ? a : (b == c ? b : a));
	printf("%d", d);
	return 0;
}