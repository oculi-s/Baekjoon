#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", (a <= b && b <= c) || (c <= b && b <= a) ? b : (b <= a && a <= c) || (c <= a && a <= b) ? a : c);
	return 0;
}