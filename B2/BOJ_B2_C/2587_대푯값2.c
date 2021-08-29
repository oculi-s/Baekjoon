#include <stdio.h>
#include <stdlib.h>

int* _c(int* a, int* b) {
	return *a - *b;
}

int i, s, a[5];
int main() {
	for (; i < 5; i++)
		scanf("%d", a + i), s += a[i];
	qsort(a, 5, sizeof(int), _c);
	printf("%d\n%d", s / 5, a[2]);
	return 0;
}