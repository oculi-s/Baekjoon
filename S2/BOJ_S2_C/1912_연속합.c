#include <stdio.h>
int p[100000], a[100000];

int _max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int n, i, m;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", p + i), a[i] = 0;
	a[0] = p[0], m = a[0];
	for (i = 1; i < n; i++)
		a[i] = _max(a[i - 1] + p[i], p[i]), m = _max(m, a[i]);
	printf("%d", m);
	return 0;
}