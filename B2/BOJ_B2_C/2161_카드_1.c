#include <stdio.h>

int i, n, x[2000], f;
int main() {
	scanf("%d", &n);
	for (; i < n; i++)
		x[i] = i + 1;
	while (f < n)
		printf("%d ", x[f]), f++, x[n] = x[f], f++, n++;
	return 0;
}