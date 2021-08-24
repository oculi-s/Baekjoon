#include <stdio.h>

int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 0; j < i; j++)
			printf("*");
		for (j = i; j < 2 * n - i; j++)
			printf(" ");
		for (j = 2 * n - i; j < 2 * n; j++)
			printf("*");
		printf("\n");
	}
	for (i = n - 1; i; i--) {
		for (j = 0; j < i; j++)
			printf("*");
		for (j = i; j < 2 * n - i; j++)
			printf(" ");
		for (j = 2 * n - i; j < 2 * n; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}