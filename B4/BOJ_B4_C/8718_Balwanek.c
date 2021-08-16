#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	if (k * 7000 <= n * 1000)
		printf("%d", k * 7000);
	else if (k * 3500 <= n * 1000)
		printf("%d", k * 3500);
	else if (k * 1750 <= n * 1000)
		printf("%d", k * 1750);
	else
		printf("0");
	return 0;
}