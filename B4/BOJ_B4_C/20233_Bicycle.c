#include <stdio.h>

int _max(int a, int b) {
	return a > b ? a : b;
}

int a, x, b, y, t;
int main() {
	scanf("%d\n%d\n%d\n%d\n%d", &a, &x, &b, &y, &t);
	printf("%d %d", a + 21 * x * _max(t - 30, 0), b + 21 * y * _max(t - 45, 0));
	return 0;
}