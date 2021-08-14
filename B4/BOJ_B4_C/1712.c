#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int s = (b >= c) ? -1 : 1 + (int)(a / (c - b));
	printf("%d", s);
	return 0;
}