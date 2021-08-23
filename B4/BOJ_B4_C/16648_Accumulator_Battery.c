#include <stdio.h>

int main() {
	float a, b, c;
	scanf("%f %f", &a, &b);
	if (b > 20)
		c = a / (100 - b), printf("%f", (b - 20) * c + 40 * c);
	else
		c = a / (120 - 2 * b), printf("%f", 2 * b * c);
	return 0;
}