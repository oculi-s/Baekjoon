#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", (n / 2 + 1) * (n / 2 + 2 - (n % 2 == 0)));
	return 0;
}