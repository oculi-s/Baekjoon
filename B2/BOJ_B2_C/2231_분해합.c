#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, l = 0;
	scanf("%d", &n);
	int a = n, b;
	while (a)
		l++, a /= 10;
	for (int i = n - l * 9; i < n; i++) {
		a = i, b = i;
		while (b)
			a += b % 10, b /= 10;
		if (a == n) {
			printf("%d", i);
			break;
		}
	}
	if (a != n)
		printf("%d", 0);
	return 0;
}