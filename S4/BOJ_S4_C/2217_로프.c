#include <stdio.h>

int* _c(int* a, int* b) {
	return *a - *b;
}

int s[100000], n, i, v, m;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", s + i);
	qsort(s, n, sizeof(int), _c);
	for (i = 0; i < n; i++)
		v = s[i] * (n - i), m = m > v ? m : v;
	printf("%d", m);
	return 0;
}