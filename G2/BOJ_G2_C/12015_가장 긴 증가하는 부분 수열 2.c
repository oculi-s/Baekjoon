#include <stdio.h>
#define N 1000001

int n, i, j, e = 1, a[N], b[N], d[N];

int find(int v, int r) {
	int l = 0, m;
	while (l < r) {
		m = (l + r) / 2;
		if (b[m] < v)
			l = m + 1;
		else if (b[m] >= v)
			r = m;
	}
	return r;
}

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", a + i);
	for (i = 1; i <= n; i++) {
		if (b[e - 1] < a[i])
			b[e] = a[i], d[i] = e, e++;
		else {
			j = find(a[i], e);
			d[i] = j;
			if (a[i] < b[j])
				b[j] = a[i];
		}
	}
	printf("%d", e - 1);
	return 0;
}
