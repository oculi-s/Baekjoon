#include <stdio.h>
#define M 100001

int d[3 * M], s[10 * M][2];
int main() {
	int n, k, p, v, i, f = 0, e = 1, m = M;
	scanf("%d %d", &n, &k);
	if (n >= k) {
		printf("%d", n - k);
		return 0;
	}
	for (i = 0; i < 3 * k; i++)
		d[i] = M;
	s[0][0] = n, s[0][1] = 0, d[n] = 0;
	while (f < e) {
		p = s[f][0], v = s[f][1], f++;
		if (p <= 4 * k / 3) {
			if (p > 1)
				if (d[p - 1] >= v + 1)
					s[e][0] = p - 1, s[e][1] = v + 1, d[p - 1] = v + 1, e++;
			if (d[p + 1] >= v + 1)
				s[e][0] = p + 1, s[e][1] = v + 1, d[p + 1] = v + 1, e++;
			if (d[p * 2] >= v && p)
				s[e][0] = p * 2, s[e][1] = v, d[p * 2] = v, e++;
			if (p * 2 == k) {
				if (v < m)
					m = v;
			}
			else if (p + 1 == k || p - 1 == k) {
				if (v + 1 < m)
					m = v + 1;
			}
		}
	}
	printf("%d", m);
	return 0;
}