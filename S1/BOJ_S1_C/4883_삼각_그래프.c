#include <stdio.h>
#define N 100001

int n, i, j, a[N][5], t;

int min4(int a, int b, int c, int d) {
	if (a < b && a < c && a < d)
		return a;
	else if (b < c && b < d)
		return b;
	else if (c < d)
		return c;
	else
		return d;
}

int main() {
	scanf("%d", &n);
	while (n) {
		for (i = 0; i < 5; i++)
			a[0][i] = N;
		for (i = 0; i <= n; i++)
			a[i][0] = N, a[i][4] = N;
		for (i = 1; i <= n; i++)
			scanf("%d %d %d", &(a[i][1]), &(a[i][2]), &(a[i][3]));
		a[1][1] = 1001, a[1][3] += a[1][2];
		for (i = 2; i <= n; i++)
			for (j = 1; j <= 3; j++)
				a[i][j] += min4(a[i][j - 1], a[i - 1][j - 1], a[i - 1][j], a[i - 1][j + 1]);
		printf("%d. %d\n", ++t, a[n][2]);
		scanf("%d", &n);
	}
}
