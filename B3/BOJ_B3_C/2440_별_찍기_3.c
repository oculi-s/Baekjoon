#include <stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);
	while (n--) {
		for (i = 0; i <= n; i++)
			printf("*");
		printf("\n");
	}
	return 0;
}