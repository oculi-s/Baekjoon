#include <stdio.h>

int a, b, c;
int main() {
	scanf("%d %d %d", &a, &b, &c);
	if (b <= a && a <= c)
		printf("%d", a);
	else if (a <= b && b <= c)
		printf("%d", b);
	else
		printf("%d", c);
	return 0;
}