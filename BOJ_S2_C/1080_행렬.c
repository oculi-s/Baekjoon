#include <stdio.h>
#include <stdbool.h>

bool P[50][50], Q[50][50];

int main() {
	int m, n, i, j, k, l, c = 0;
	char t[50];
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%s", t);
		for (j = 0; j < m; j++)
			P[i][j] = t[j] == '1';
	}
	for (i = 0; i < n; i++) {
		scanf("%s", t);
		for (j = 0; j < m; j++)
			Q[i][j] = t[j] == '1';
	}
	for (i = 0; i < n - 2; i++)
		for (j = 0; j < m - 2; j++)
			if (P[i][j] != Q[i][j]) {
				c++;
				for (k = i; k <= i + 2; k++)
					for (l = j; l <= j + 2; l++)
						P[k][l] = !P[k][l];
			}
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (P[i][j] != Q[i][j]) {
				printf("-1");
				return 0;
			}
	printf("%d", c);
	return 0;
}