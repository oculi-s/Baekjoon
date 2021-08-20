#include <stdio.h>
#define D 1000000000

int n, a[12], b[12], i, j, s = 0;
int main() {
	scanf("%d", &n);
	for (i = 2; i <= 10; i++)
		a[i] = 1;
	for (i = 1; i < n; i++) {
		for (j = 1; j <= 10; j++)
			b[j] = a[j - 1] + a[j + 1];
		for (j = 1; j <= 10; j++)
			a[j] = b[j] % D;
	}
	for (i = 1; i <= 10; i++)
		s += a[i], s %= D;
	printf("%d", s);
	return 0;
}