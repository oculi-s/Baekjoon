#include <stdio.h>

int n, c;
int main() {
	scanf("%d", &n);
	n = 1000 - n;
	c += n / 500, n %= 500;
	c += n / 100, n %= 100;
	c += n / 50, n %= 50;
	c += n / 10, n %= 10;
	c += n / 5, n %= 5;
	c += n;
	printf("%d", c);
	return 0;
}