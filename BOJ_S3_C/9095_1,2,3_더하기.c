#include <stdio.h>

int main() {
	int t, i, m = 0;
	scanf("%d", &t);
	int* n = malloc(sizeof(int) * t);
	for (i = 0; i < t; i++)
		scanf("%d", n + i), m = m > n[i] ? m : n[i];
	int* p = malloc(sizeof(int) * (m + 3));
	p[1] = 1, p[2] = 2, p[3] = 4;
	for (i = 4; i <= m; i++)
		p[i] = p[i - 3] + p[i - 2] + p[i - 1];
	for (i = 0; i < t; i++)
		printf("%d\n", p[n[i]]);
	return 0;
}