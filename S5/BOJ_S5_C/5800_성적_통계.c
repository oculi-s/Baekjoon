#include <stdio.h>
#define max(a, b) (a>b?a:b)
#define min(a, b) (a<b?a:b)

int c(int* a, int* b) {
	return *b - *a;
}

int t, i, n, x[50], j, a, b, d;
int main() {
	scanf("%d", &t);
	for (i = 1; i <= t; i++) {
		printf("Class %d\n", i);
		scanf("%d", &n);
		a = 100, b = 0, d = 0;
		for (j = 0; j < n; j++) {
			scanf("%d", x + j);
			a = min(a, x[j]);
			b = max(b, x[j]);
		}
		qsort(x, j, 4, c);
		for (j = 0; j < n - 1; j++)
			d = max(d, x[j] - x[j + 1]);
		printf("Max %d, Min %d, Largest gap %d\n", b, a, d);
	}
	return 0;
}