#include <stdio.h>
#include <stdlib.h>

int* _c(int* a, int* b) {
	return *a - *b;
}

int t[1000], n, i, s;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", t + i);
	qsort(t, n, sizeof(int), _c);
	for (i = 0; i < n; i++)
		s += (n - i) * t[i];
	printf("%d", s);
	return 0;
}