#include <stdio.h>
#include <math.h>

int a, b;
int main() {
	scanf("%d %d", &a, &b);
	printf("%.7lf", a + b - sqrt(a * a + b * b));
	return 0;
}