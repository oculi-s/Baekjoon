#include <stdio.h>

long long h[50], c[50];
int main() {
	long long n, i, j, k, m = 0;
	scanf("%lld", &n);
	for (i = 0; i < n; i++)
		scanf("%lld", h + i), c[i] = 2;
	c[0]--, c[n - 1]--;
	for (i = 0; i < n; i++) {
		for (j = i + 2; j < n; j++) {
			for (k = i + 1; k < j; k++)
				if (((j - k) * h[i] + (k - i) * h[j]) <= (j - i) * h[k])
					break;
			if (k == j)
				c[i]++, c[j]++;
		}
		m = m > c[i] ? m : c[i];
	}
	printf("%lld", m);
	return 0;
}