#include <stdio.h>

int n, i, x[11], a, b, c;
int main() {
	scanf("%d", &n);
	for (i = 1; i <= 10; i++)
		x[i] = -1;
	for (i = 0; i < n; i++)
		scanf("%d %d", &a, &b), c += (x[a] + b == 1), x[a] = b;
	printf("%d", c);
	return 0;
}