#include <stdio.h>

int _c(int* a, int* b) {
	return *a - *b;
}

int i, t, p, a[11], v;
int main() {
	for (i = 0; i < 11; i++)
		scanf("%d %d", a + i, &v), p += 20 * v;
	qsort(a, 11, sizeof(int), _c);
	for (i = 0; i < 11; i++)
		t += a[i], p += t;
	printf("%d", p);
	return 0;
}
