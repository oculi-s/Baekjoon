#include <stdio.h>

int _max(int a, int b) {
	return a > b ? a : b;
}

int n, a[1000], m[1000], i, j, b;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", a + i), m[i] = 1;
	for (i = 0; i < n; i++)
		for (j = 0; j <= i; j++)
			if (a[j] > a[i])
				m[i] = _max(m[j] + 1, m[i]);
	for (i = 0; i < n; i++)
		b = _max(b, m[i]);
	printf("%d", b);
	return 0;
}