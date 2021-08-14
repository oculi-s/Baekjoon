#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, c;
	scanf("%d", &n);
	c = n / 5;
	n %= 5;
	while (c > 0 && n % 3) {
		c -= 1;
		n += 5;
	}
	c += n / 3;
	printf("%d", n % 3 ? -1 : c);
	return 0;
}