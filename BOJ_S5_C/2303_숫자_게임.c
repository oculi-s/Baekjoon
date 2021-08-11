#include <stdio.h>

short a[1000][6];
int main() {
	int n, i, j, k, l, t;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		a[i][5] = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &(a[i][j]));

	for (i = 0; i < n; i++)
		for (j = 0; j < 5; j++)
			for (k = j + 1; k < 5; k++)
				for (l = k + 1; l < 5; l++)
					t = (a[i][j] + a[i][k] + a[i][l]) % 10, a[i][5] = a[i][5] > t ? a[i][5] : t;
	j = 0;
	for (i = 0; i < n; i++)
		j = a[i][5] > j ? a[i][5] : j;
	for (i = n - 1; i >= 0; i--)
		if (a[i][5] == j) {
			printf("%d", i + 1);
			break;
		}
	return 0;
}