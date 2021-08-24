#include <stdio.h>

int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < 2 * n; i++) {
		if (i % 2)
			for (j = 0; j < n / 2; j++)
				printf(" *");
		else
			for (j = 0; j < (n + 1) / 2; j++)
				printf("* ");
		printf("\n");
	}
	return 0;
}