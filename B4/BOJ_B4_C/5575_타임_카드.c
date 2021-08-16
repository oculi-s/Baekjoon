#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, e, f;
	for (int i = 0; i < 3; i++) {
		scanf("%d %d %d %d %d %d", &d, &e, &f, &a, &b, &c);
		c -= f, b -= c < 0, b -= e, a -= b < 0, a -= d, c += c < 0 ? 60 : 0, b += b < 0 ? 60 : 0;
		printf("%d %d %d\n", a, b, c);
	}
	return 0;
}