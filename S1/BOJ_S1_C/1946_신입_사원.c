#include <stdio.h>
#include <stdlib.h>

int t, n, i, c, m, x[100000][2];

int* _c(int a[2], int b[2]) {
	return a[0] - b[0];
}

int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i = 0; i < n; i++)
			scanf("%d %d", &x[i][0], &x[i][1]);
		qsort(x, n, sizeof(int) * 2, _c);
		c = 0, m = x[0][1];
		for (i = 0; i < n; i++) {
			if (x[i][1] > m)
				c++;
			m = x[i][1] < m ? x[i][1] : m;
		}
		printf("%d\n", n - c);
	}
	return 0;
}