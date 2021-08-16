#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i = 1;
	scanf("%d", &n);
	while (n > i * (i + 1) / 2)
		i++;
	n -= i * (i - 1) / 2;
	if (i % 2) {
		printf("%d/%d", i + 1 - n, n);
	}
	else {
		printf("%d/%d", n, i + 1 - n);
	}
	return 0;
}