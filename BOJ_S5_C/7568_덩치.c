#include <stdio.h>

int x[50], y[50], r[50];
int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d %d", x + i, y + i);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			if (x[i] < x[j] && y[i] < y[j])
				r[i]++;
		printf("%d ", 1 + r[i]);
	}
	return 0;
}