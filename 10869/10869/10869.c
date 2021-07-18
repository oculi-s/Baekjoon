#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d\n%d\n%d\n%d\n%d", a + b, a - b, a * b, (int)(a / b), a % b);
	return 0;
}