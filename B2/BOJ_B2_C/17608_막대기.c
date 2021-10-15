#include <stdio.h>

int n, x[100000], i, m, c = 1;
int main() {
	scanf("%d\n", &n);
	for (; i < n; i++)
		scanf("%d", x + i);
	for (i = n - 1; i; i--)
		m = x[i] > m ? x[i] : m, c += x[i - 1] > m;
	printf("%d", c);
	return 0;
}