#include <stdio.h>

unsigned int n, k, f, e, s, i, c, x[10001];
int main() {
	scanf("%u %u", &n, &k);
	for (; i < n; i++)
		scanf("%u", x + i);
	x[n] = 3000000000;
	s = x[f];
	while (f <= n) {
		if (s >= k)
			c += s == k, f++, e = f, s = x[f];
		else
			e++, s += x[e];
	}
	printf("%u", c);
	return 0;
}