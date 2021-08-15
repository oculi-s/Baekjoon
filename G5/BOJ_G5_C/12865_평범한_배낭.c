#include <stdio.h>

int _max(int a, int b) {
	return a > b ? a : b;
}

int w[100], v[100], a[100001][100], n, k, i, j, m[100001], b, t;
int main() {
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++)
		scanf("%d %d", w + i, v + i);
	for (i = 0; i < n; i++) {
		for (j = w[i]; j <= k; j++) {
			b = 0;
			for (t = 0; t < n; t++)
				if (t != i)
					b = _max(b, a[j - w[i]][t]);
			a[j][i] = _max(m[j], b + v[i]), m[j] = a[j][i];
		}
	}
	printf("%d", m[k]);
	return 0;
}