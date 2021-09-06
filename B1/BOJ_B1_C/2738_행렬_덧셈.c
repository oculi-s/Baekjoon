#include <stdio.h>
#include <stdlib.h>

int n, m, x[100][100], i, j, t;
int main() {
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf("%d", &x[i][j]);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf("%d", &t), x[i][j] += t;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			printf("%d ", x[i][j]);
		printf("\n");
	}
	return 0;
}