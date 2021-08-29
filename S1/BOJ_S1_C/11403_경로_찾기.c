#include <stdio.h>
#include <stdbool.h>

int n, i, j, k, l;
bool p[100][100];

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &p[i][j]);
	for (l = 0; l < 4; l++)
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				for (k = 0; k < n; k++)
					p[i][j] += p[i][k] && p[k][j];
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", p[i][j]);
		printf("\n");
	}
	return 0;
}