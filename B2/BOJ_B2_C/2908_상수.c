#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int c = 0, d = 0;
	for (int i = 0; i < 3; i++) {
		c = 10 * c + a % 10;
		d = 10 * d + b % 10;
		a /= 10;
		b /= 10;
	}
	printf("%d", c > d ? c : d);
	return 0;
}