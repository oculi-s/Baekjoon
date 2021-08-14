#include <stdio.h>

int main() {
	int n, t = 9, c = 1, i, a;
	scanf("%d", &n);
	while (n > t)
		n -= t, t *= 10, c++;
	a = n * c, t = 9;
	for (i = 1; i < c; i++)
		a += i * t, t *= 10;
	printf("%d", a);
	return 0;
}