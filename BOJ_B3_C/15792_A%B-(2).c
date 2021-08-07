#include <stdio.h>

int main() {
	int a, b, c = 0;
	scanf("%d %d", &a, &b);
	printf("%d.", a / b), a %= b, a *= 10;
	while (c < 1500)
		printf("%d", a / b), a %= b, a *= 10, c++;
	return 0;
}