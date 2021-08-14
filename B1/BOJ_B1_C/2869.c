#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);
	v -= a;
	a -= b;
	printf("%d", 1 + v / a + (int)(v % a > 0));
	return 0;
}