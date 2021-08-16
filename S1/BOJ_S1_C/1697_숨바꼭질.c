#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	if (n > k) {
		printf("%d", n - k);
	}
	else {
		int p, v, i, f = 0, e = -1;
		int* d = malloc(sizeof(int) * 3 * k);
		int** s = malloc(sizeof(int*) * 3 * k);
		for (i = 0; i < 3 * k; i++)
			d[i] = 100000, s[i] = NULL;
		p = n, v = 0;
		while (p != k) {
			if (p <= 4 * k / 3) {
				if (p > 1)
					if (d[p - 1] > v + 1)
						++e, s[e] = malloc(sizeof(int) * 2), s[e][0] = p - 1, s[e][1] = v + 1, d[p - 1] = v + 1;
				if (d[p + 1] > v + 1)
					++e, s[e] = malloc(sizeof(int) * 2), s[e][0] = p + 1, s[e][1] = v + 1, d[p + 1] = v + 1;
				if (d[p * 2] > v + 1)
					++e, s[e] = malloc(sizeof(int) * 2), s[e][0] = p * 2, s[e][1] = v + 1, d[p * 2] = v + 1;
			}
			p = s[f][0], v = s[f][1], f++;
		}
		printf("%d", v);
	}
	return 0;
}