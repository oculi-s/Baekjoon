#include <stdio.h>
#define M 100000

long long a[M], N[M], s;
int n, t, i, j, e, m, c[M];
int main() {
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &t);
		for (i = 0; i < t; i++)
			scanf("%lld", N + i), a[i] = -1;
		e = 0, m = 0, a[0] = N[0], c[0] = 0;
		for (i = 0; i < t; i++) {
			for (j = 0; j < e + 1; j++)
				if (a[j] == N[i])
					break;
			if (a[j] != N[i] || c[j] == -1)
				++e, a[e] = N[i], c[e] = 1;
			else
				c[j]++;
		}
		for (i = 0; i < e + 1; i++)
			if (c[i] > m)
				m = c[i], s = a[i];
			else if (c[i] == m)
				m = 0;
		if (m < t / 2)
			printf("SYJKGW\n");
		else if (m >= t / 2)
			printf("%lld\n", s);
	}
	return 0;
}