#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d;
	scanf("%d %d", &a, &b);
	if ((a + b) % 2 == 0 && a >= b)
		c = (a + b) / 2, d = (a - b) / 2, printf("%d %d", c > d ? c : d, c < d ? c : d);
	else
		printf("%d", -1);
}