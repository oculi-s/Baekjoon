#include <stdio.h>

int a, b, c, d, v;
int main() {
	scanf("%d %d %d", &a, &b, &c);
	while (v < c) {
		v += a, d++;
		if (!(d % 7))
			v += b;
	}
	printf("%d", d);
	return 0;
}