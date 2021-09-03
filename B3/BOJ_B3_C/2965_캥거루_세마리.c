#include <stdio.h>

int a, b, c;
int main() {
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", (b - a > c - b ? b - a : c - b) - 1);
	return 0;
}