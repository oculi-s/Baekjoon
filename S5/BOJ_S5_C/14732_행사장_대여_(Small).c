#include <stdio.h>

int n, x1, y1, x2, y2, a[501][501], i, j;
int main() {
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (i = y1; i < y2; i++)
			for (j = x1; j < x2; j++)
				a[i][j] = 1;
	}
	n = 0;
	for (i = 0; i <= 500; i++)
		for (j = 0; j <= 500; j++)
			n += a[i][j];
	printf("%d", n);
	return 0;
}
