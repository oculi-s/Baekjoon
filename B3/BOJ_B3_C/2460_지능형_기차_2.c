#include <stdio.h>

int a, b, c, i, m;
int main() {
	for (; i < 10; i++)
		scanf("%d %d", &a, &b), c += b - a, m = m > c ? m : c;
	printf("%d", m);
	return 0;
}