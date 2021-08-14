#include <stdio.h>
#include <stdlib.h>

int p[100000][2];
int _c(int* a, int* b) {
	return a[1] == b[1] ? a[0] - b[0] : a[1] - b[1];
}

int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d %d", &p[i][0], &p[i][1]);
	qsort(p, n, sizeof(int) * 2, _c);
	for (i = 0; i < n; i++)
		printf("%d %d\n", p[i][0], p[i][1]);
	return 0;
}