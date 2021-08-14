#include <stdio.h>

int main() {
	int a, s = 0, i = 5;
	while (i--)
		scanf("%d", &a), a = a < 40 ? 40 : a, s += a;
	printf("%d", s / 5);
	return 0;
}