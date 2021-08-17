#include <stdio.h>

unsigned int G[1001][1001];

int main() {
	int n, m, a, b, c, i, j, k, l;
	scanf("%d\n%d", &n, &m);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			G[i][j] = 100000000;
	while (m--) {
		scanf("%d %d %d", &a, &b, &c);
		if (c < G[a][b])
			G[a][b] = c;
	}
	scanf("%d %d", &a, &b);
	for (l = 0; l < 2; l++)
		for (j = 1; j <= n; j++)
			for (k = 1; k <= n; k++)
				if (G[a][k] + G[k][j] < G[a][j])
					G[a][j] = G[a][k] + G[k][j];
	printf("%d", G[a][b]);
	return 0;
}