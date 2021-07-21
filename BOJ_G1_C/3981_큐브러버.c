#include <stdio.h>

int main() {
	unsigned long long T, N, x, x0, x1, x2, i, j, a[500], b[500];
	scanf("%lld", &T);
	while (T--) {
		scanf("%lld", &N);
		if (N < 5) {
			for (i = 0; i < N; i++)
				scanf("%lld", &x);
			printf("YES\n");
		}
		else {
			scanf("%lld %lld %lld", &x0, &x1, &x2);
			x1 -= x0, x2 = x2 - x0 - 2 * x1;
			for (i = 3; i < N; i++) {
				scanf("%lld", &x);
				a[i] = x - x0 - (i * x1) - (i * (i - 1) / 2 * x2);
				b[i] = i * i * i - 3 * i * i + 2 * i;
			}
			for (i = 3; i < N - 1; i++)
				if (a[i] * b[i+1] != a[i + 1] * b[i])
					break;
			printf("%s\n", (i == N - 1) ? "YES" : "NO");
		}
	}
	return 0;
}