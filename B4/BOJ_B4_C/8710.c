#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", (b - a) / c + ((b - a) % c != 0));
	return 0;
}