#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	int i = 1;
	while (n > 1 + 3 * i * (i - 1))
		i++;
	printf("%d", i);
	return 0;
}