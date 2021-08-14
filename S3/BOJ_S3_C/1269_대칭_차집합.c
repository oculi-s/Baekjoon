#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define M 100000001

bool b[M] = { 0 };
int main() {
	int n, m, t, v, i;
	scanf("%d %d", &n, &m);
	int* a = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	for (i = 0; i < m; i++)
		scanf("%d", &t), b[t] = 1;
	v = n + m;
	for (i = 0; i < n; i++)
		if (b[a[i]])
			v -= 2;
	printf("%d", v);
	return 0;
}