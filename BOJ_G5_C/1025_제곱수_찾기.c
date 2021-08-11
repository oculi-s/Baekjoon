#include <stdio.h>
#include <math.h>

int main() {
	int n, m, i, j, k, l, x, y, t, a = -1;
	char p[10][10];
	double r;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%s", p + i);
	for (y = -n; y <= n; y++)
		for (x = -m; x <= m; x++)
			if (x || y)
				for (i = 0; i < n; i++)
					for (j = 0; j < m; j++) {
						t = 0;
						for (k = i, l = j; 0 <= k && k < n && 0 <= l && l < m; k += y, l += x) {
							t += p[k][l] - 48, r = sqrt(t);
							if (r == (int)r)
								a = a > t ? a : t;
							t *= 10;
						}
					}
	printf("%d", a);
	return 0;
}