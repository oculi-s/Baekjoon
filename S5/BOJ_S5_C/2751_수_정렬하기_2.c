#include <stdio.h>
#include <stdlib.h>

int c(int *a, int *b) {
	return *a - *b;
}

int main() {
	int n;
	scanf("%d", &n);
	int* s = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", s + i);
	qsort(s, n, sizeof(int), c);
	for (int i = 0; i < n; i++)
		printf("%d\n", s[i]);
	return 0;
}