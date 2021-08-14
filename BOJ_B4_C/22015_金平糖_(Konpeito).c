#include <stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	d = a > b && a > c ? a : b > c ? b : c;
	printf("%d\n", 3 * d - a - b - c);
	return 0;
}