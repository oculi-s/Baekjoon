#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	while (a + b) {
		if (b > a && b / a * a == b)
			printf("factor\n");
		else if (b < a && a / b * b == a)
			printf("multiple\n");
		else
			printf("neither\n");
		scanf("%d %d", &a, &b);
	}
	return 0;
}