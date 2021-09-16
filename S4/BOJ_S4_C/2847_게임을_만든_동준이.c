#include <stdio.h>

int n, i, s, d, x[100];
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", x + i);
	for (i = n - 1; i; i--)
		if (x[i] <= x[i - 1])
			d = x[i - 1] - x[i] + 1, s += d, x[i - 1] -= d;
	printf("%d", s);
	return 0;
}