#include <stdio.h>

int n, m, l, a[100][100], b[100][100], i, j, k, s;
int main() {
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf("%d", &a[i][j]);
	scanf("%d %d", &m, &l);
	for (i = 0; i < m; i++)
		for (j = 0; j < l; j++)
			scanf("%d", &b[i][j]);
	for (i = 0; i < n; i++) {
		for (j = 0; j < l; j++) {
			s = 0;
			for (k = 0; k < m; k++)
				s += a[i][k] * b[k][j];
			printf("%d ", s);
		}
		printf("\n");
	}
	return 0;
}