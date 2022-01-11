#include <stdio.h>

int n, k, i, j, t, a[10001], b[10001], c[100], e;
int main() {
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++) {
		scanf("%d", &t);
		if (t <= 10000)
			a[t] = 1, b[t] = 1;
	}
	for (i = 1; i <= 10000; i++) {
		if (a[i])
			c[e] = i, e++;
		if (!b[i])
			b[i] = 10001;
	}
	for (i = 0; i < n; i++)
		for (j = c[i] + 1; j <= k; j++)
			if (b[j] > b[j - c[i]] + 1)
				b[j] = b[j - c[i]] + 1;
	printf("%d", b[k] == 10001 ? -1 : b[k]);
	return 0;
}
