#include <stdio.h>

int d[100001][5][5], a = 1, i, j, k, m = 2e9;
int b[5][5];
int r[5] = { 0,4,1,2,3 }, l[5] = { 0,2,3,4,1 }, c[5] = {0,3,4,1,2};

int main() {
	for (i = 1; i <= 4; i++)
		b[i][i] = 1, b[0][i] = 2, b[i][r[i]] = 3, b[i][l[i]] = 3, b[i][c[i]] = 4;
	for (i = 0; i <= 100000; i++)
		for (j = 0; j < 5; j++)
			for (k = 0; k < 5; k++)
				d[i][j][k] = m;
	d[0][0][0] = 0;
	i = 1;
	scanf("%d", &a);
	while (a) {
		for (j=0; j<=4; j++)
			for (k = 0; k <= 4; k++) {
				if (d[i - 1][k][j] + b[k][a] < d[i][a][j])
					d[i][a][j] = d[i - 1][k][j] + b[k][a];
				if (d[i - 1][j][k] + b[k][a] < d[i][j][a])
					d[i][j][a] = d[i - 1][j][k] + b[k][a];
			}
		scanf("%d", &a), i++;
	}
	for (j = 0; j <= 4; j++)
		for (k = 0; k <= 4; k++)
			if (d[i - 1][j][k] < m)
				m = d[i - 1][j][k];
	printf("%d", m);
	return 0;
}
