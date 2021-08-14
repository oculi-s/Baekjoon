#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	double d = sqrt(b * b + c * c);
	printf("%d %d", (int)(a * b / d), (int)(a * c / d));
	return 0;
}