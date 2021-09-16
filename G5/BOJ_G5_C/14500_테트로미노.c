#include <stdio.h>

int n, m, i, j, k, x[502][502], a;

void max(int b) {
	a = a > b ? a : b;
}

void t1() {
	if (i + 3 <= n)
		max(x[i][j] + x[i + 1][j] + x[i + 2][j] + x[i + 3][j]);
	if (j + 3 <= m)
		max(x[i][j] + x[i][j + 1] + x[i][j + 2] + x[i][j + 3]);
	max(x[i][j] + x[i + 1][j] + x[i][j + 1] + x[i + 1][j + 1]);
}

void t2() {
	int v = x[i][j] + x[i][j - 1];
	max(v + x[i][j + 1] + x[i + 1][j]);
	max(v + x[i][j + 1] + x[i - 1][j]);
	for (k = 0; k <= 1; k++)
		max(v + x[i - 1][j - k] + x[i + 1][j - k]);

	max(v + x[i][j + 1] + x[i + 1][j + 1]);
	max(v + x[i][j + 1] + x[i - 1][j + 1]);
	max(v + x[i][j + 1] + x[i + 1][j - 1]);
	max(v + x[i][j + 1] + x[i - 1][j - 1]);
	if (i + 2 <= n)
		for (k = 0; k <= 1; k++)
			max(v + x[i + 1][j - k] + x[i + 2][j - k]);
	if (i >= 2)
		for (k = 0; k <= 1; k++)
			max(v + x[i - 1][j - k] + x[i - 2][j - k]);

	max(v + x[i + 1][j] + x[i + 1][j + 1]);
	max(v + x[i - 1][j] + x[i - 1][j + 1]);
	max(v + x[i - 1][j] + x[i + 1][j - 1]);
	max(v + x[i + 1][j] + x[i - 1][j - 1]);
}

int main() {
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf("%d", &x[i][j]);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			t1(), t2();
	printf("%d", a);
	return 0;
}