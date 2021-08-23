#include <stdio.h>

int main() {
	int a, b;
	scanf("%d\n%d", &a, &b);
	b += 60;
	if (a < b)
		printf("%d", a * 1500);
	else
		printf("%d", b * 1500 + (a - b) * 3000);
	return 0;
}