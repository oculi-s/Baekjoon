#include <stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	d = (b / d) * (c / d);
	printf("%d", a < d ? a : d);
	return 0;
}