#include <stdio.h>

int main() {
	int a, b, c, d, e;
	scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);
	if (a <= 0)
		if (b <= 0)
			printf("%d", (b - a) * c);
		else
			printf("%d", -a * c + d + b * e);
	else
		printf("%d", (b - a) * e);
	return 0;
}