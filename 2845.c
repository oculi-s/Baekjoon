#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	scanf("%d %d", &a, &b);
	while (scanf("%d", &c) != EOF)
		printf("%d ", c - a * b);
	return 0;
}