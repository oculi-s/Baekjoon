#include <stdio.h>
#include <stdlib.h>

int main() {
	int t;
	scanf("%d", &t);
	int a, b;
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);
	}

	return 0;
}