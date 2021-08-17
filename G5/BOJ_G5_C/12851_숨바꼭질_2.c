#include <stdio.h>
#define M 100001

int d[3 * M], s[10 * M][2];
int main() {
	int n, k, p, v, i, f = 0, e = 1, c = 0, m = M;
	scanf("%d %d", &n, &k);
	if (n >= k) {
		printf("%d\n%d", n - k, 1);
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
			if (d[p * 2] >= v + 1)
				s[e][0] = p * 2, s[e][1] = v + 1, d[p * 2] = v + 1, e++;
			if (p + 1 == k || p - 1 == k || p * 2 == k)
				if (v + 1 < m)
					m = v + 1, c = 1;
				else if (v + 1 == m)
					c++;
		}
	}
	printf("%d\n%d", m, c);
	return 0;
}