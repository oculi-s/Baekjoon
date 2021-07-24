#include <stdio.h>

double _max3(long double a, long double b, long double c) {
	return a > b && a > c ? a : b > c ? b : c;
}

int main() {
	int i, t[15];
	float h, y;
	scanf("%f %f", &h, &y);
	for (i = 0; i < 15; i++)
		t[i] = 0;
	t[4] = h;
	for (i = 5; i < y + 5; i++)
		t[i] = (int)_max3(t[i - 1] * 1.05, t[i - 3] * 1.2, t[i - 5] * 1.35);
	printf("%d", (int)t[i - 1]);
	return 0;
}