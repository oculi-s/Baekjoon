#include <stdio.h>

int n, i, j;
int main() {
	scanf("%d", &n);
	for (; i < n; i++) {
		if (i % 2)
			for (j = 0; j < n; j++)
				printf(" *");
		else
			for (j = 0; j < n; j++)
				printf("* ");
		printf("\n");
	}
	return 0;
}