#include <stdio.h>

int a, b, c;
int main() {
	scanf("%d\n%d\n%d", &a, &b, &c);
	b = b > a - b ? b : a - b;
	c = c > a - c ? c : a - c;
	printf("%d", 4 * b * c);
	return 0;
}