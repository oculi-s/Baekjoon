#include <stdio.h>

int n, i, j, a[1001], b[1001];
int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", a + i), b[i] = a[i];
	for (i = 2; i <= n; i++)
		for (j = 1; j < i; j++)
			if (b[i - j] + b[j] < b[i])
				b[i] = b[i - j] + b[j];
	printf("%d", b[n]);
	return 0;
}
