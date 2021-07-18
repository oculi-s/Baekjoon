#include <stdio.h>

int main() {
	float n;
	scanf("%f", &n);
	printf("%.0f %.0f", 0.78 * n, n - 0.2 * 0.22 * n);
	return 0;
}