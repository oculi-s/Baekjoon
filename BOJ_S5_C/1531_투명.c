#include <stdio.h>

int main() {
	int n, m, i, j, k, x1, y1, x2, y2, p[101][101], a = 0;
	for (i = 1; i <= 100; i++)
		for (j = 1; j <= 100; j++)
			p[i][j] = 0;
	scanf("%d %d", &n, &m);
	for (k = 0; k < n; k++) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (i = y1; i <= y2; i++)
			for (j = x1; j <= x2; j++)
				p[i][j]++;
	}
	for (i = 1; i <= 100; i++)
		for (j = 1; j <= 100; j++)
			if (p[i][j] > m)
				a++;
	printf("%d", a);
	return	0;
}