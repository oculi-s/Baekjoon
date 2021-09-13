#include <stdio.h>

int a, b, c, d, p, q, r, i, j, k;
int main() {
	scanf("%d %d %d %d", &a, &b, &c, &d);
	p = d / a, q = d / b, r = d / c;
	for (i = 0; i <= p; i++)
		for (j = 0; j <= q; j++)
			for (k = 0; k <= r; k++)
				if (i * a + j * b + k * c == d) {
					printf("1");
					return 0;
				}
	printf("0");
	return 0;
}