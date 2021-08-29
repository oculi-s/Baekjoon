#include <stdio.h>

int p[201][201], r[1000], n, m, i, j, k, l;
int main() {
	scanf("%d\n%d", &n, &m);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			scanf("%d", &p[i][j]);
	for (l = 1; l <= 4; l++)
		for (i = 1; i <= n; i++)
			for (j = i; j <= n; j++)
				if (!p[i][j])
					for (k = 1; k <= n; k++)
						if (p[i][k] && p[k][j])
							p[i][j] = 1, p[j][i] = 1;
	for (i = 0; i < m; i++)
		scanf("%d", r + i);
	for (i = 1; i < m; i++)
		if (r[i - 1] != r[i])
			if (!p[r[i - 1]][r[i]]) {
				printf("NO");
				return 0;
			}
	printf("YES");
	return 0;
}