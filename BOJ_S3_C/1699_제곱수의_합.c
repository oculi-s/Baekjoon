#include <stdio.h>

int a[100001];
int main() {
	int n, i, j, m;
	scanf("%d", &n);
	a[1] = 1;
	for (i = 2; i <= n; i++) {
		m = 100000;
		for (j = 1; j * j <= i; j++)
			m = m < a[i - j * j] + 1 ? m : a[i - j * j] + 1;
		a[i] = m;
	}
	printf("%d", a[n]);
	return 0;
}