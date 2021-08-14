#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, e;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	e = a + b + c + d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	e = e > (a + b + c + d) ? e : (a + b + c + d);
	printf("%d", e);
	return 0;
}