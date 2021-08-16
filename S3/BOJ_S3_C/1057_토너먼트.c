#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, a, b, c = 0;
	scanf("%d %d %d", &n, &a, &b);
	while (a != b) {
		a = (a + a % 2) / 2, b = (b + b % 2) / 2, c++;
	}
	printf("%d", c);
	return 0;
}