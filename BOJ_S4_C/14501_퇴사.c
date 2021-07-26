#include <stdio.h>

int main() {
	int n, i, j, m, t[15], p[15], a[15];
	scanf("%d", &n);
	a[0] = 0;
	for (i = 0; i < n; i++)
		scanf("%d %d", t + i, p + i);
	for (i = 0; i < n; i++) {
		m = 0;
		for (j = 0; j < i; j++)
			m = m > a[j] ? m : a[j];
		for (j = 0; j < i; j++)
			if (t[j] == i - j)
				m = m > a[j] + p[j] ? m : a[j] + p[j];
		a[i] = m;
	}
	for (i = 0; i < n; i++)
		if (t[i] == n - i)
			m = m > a[i] + p[i] ? m : a[i] + p[i];
	for (i = 0; i < n; i++)
		m = m > a[i] ? m : a[i];
	printf("%d", m);
	return 0;
}