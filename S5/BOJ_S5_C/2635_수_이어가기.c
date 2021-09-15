#include <stdio.h>

int n, i, j, e, m, l, r, t[30000], x[30000];
int main() {
	scanf("%d", &n);
	t[0] = n;
	for (i = 0; i <= n; i++) {
		e = 2;
		t[1] = n - i;
		l = t[0], r = t[1];
		while (l - r >= 0)
			t[e] = l - r, l = r, r = t[e], e++;
		if (m < e)
			for (m = e, j = 0; j < e; j++)
				x[j] = t[j];
	}
	printf("%d\n", m);
	for (i = 0; i < m; i++)
		printf("%d ", x[i]);
	return 0;
}