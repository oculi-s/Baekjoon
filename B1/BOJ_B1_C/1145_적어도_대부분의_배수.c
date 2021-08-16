#include <stdio.h>
#include <stdbool.h>

int main() {
	int a, b, c, d, e, i = 1, v = 0;
	bool f[5];
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	while (v < 3) {
		v = (i % a == 0) + (i % b == 0) + (i % c == 0) + (i % d == 0) + (i % e == 0);
		i++;
	}
	printf("%d", i - 1);
	return 0;
}