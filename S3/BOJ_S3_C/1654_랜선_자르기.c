#include <stdio.h>

int main() {
	unsigned int n, k, i, * l, L, R, M, s, a;
	scanf("%u %u", &k, &n);
	l = malloc(sizeof(unsigned int) * k);
	for (i = 0; i < k; i++)
		scanf("%u", l + i);
	L = 0, R = 2147483647;
	while (R - L != 1) {
		s = 0, M = (L + R) / 2;
		for (i = 0; i < k; i++)
			s += l[i] / M;
		if (s >= n)
			L = M;
		else
			R = M;
	}
	s = 0, a = 0;
	for (i = 0; i < k; i++)
		s += l[i] / L, a += l[i] / R;
	if (a == n)
		printf("%u", R);
	else
		printf("%u", L);
	return 0;
}