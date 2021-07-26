#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, a = 1;
	scanf("%d", &n);
	while (n > 1)
		a *= n--;
	printf("%d", a);
	return 0;
}