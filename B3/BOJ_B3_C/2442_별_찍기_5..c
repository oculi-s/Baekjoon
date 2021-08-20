#include <stdio.h>

int n, i, j;
int main() {
	scanf("%d", &n);
	for (i = n - 1; i >= 0; i--) {
		for (j = 0; j < i; j++)
			printf(" ");
		for (j = i; j < 2 * n - i - 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}