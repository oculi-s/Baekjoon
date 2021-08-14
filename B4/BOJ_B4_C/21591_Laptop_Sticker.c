#include <stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", c < a - 1 && d < b - 1);
	return 0;
}