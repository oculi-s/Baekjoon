#include <stdio.h>

int main() {
	float a, b;
	scanf("%f", &a);
	b = a / 100 + 25;
	b = b > 2000 ? 2000 : b;
	b = b < 100 ? 100 : b;
	printf("%.2f", b);
	return 0;
}