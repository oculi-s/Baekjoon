#include <stdio.h>

int main() {
	int t, i, m = 0;
	scanf("%d", &t);
	int* n = malloc(sizeof(int) * t);
	for (i = 0; i < t; i++)
		scanf("%d", n + i), m = m > n[i] ? m : n[i];
	long long* p = malloc(sizeof(long long) * (m + 5));
	p[1] = 1, p[2] = 1, p[3] = 1, p[4] = 2, p[5] = 2;
	for (i = 6; i <= m; i++)
		p[i] = p[i - 1] + p[i - 5];
	for (i = 0; i < t; i++)
		printf("%lld\n", p[n[i]]);
	return 0;
}